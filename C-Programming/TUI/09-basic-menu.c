#include <ncurses.h>
int main ()
{
    initscr();
    noecho();

    // Get screen size
    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW *menuwin = newwin(6, xMax-12, yMax-8, 5);
    // height, width, start_y, start_x
    box(menuwin, 0, 0);
    refresh();
    wrefresh(menuwin);

    // Enables keypad
    keypad(menuwin, true);

    char choices[3][5] = {"Walk", "Jog", "Run"};

    int choice;
    int highlight = 0;

    // MENU print
    bool flag = true;
    while (flag) {
        for(int i=0; i<3; i++){
            if(i == highlight){
                wattron(menuwin, A_REVERSE);
            }
            mvwprintw(menuwin, i+1, 1, "%s", choices[i]);
            wattroff(menuwin, A_REVERSE);
        }

        choice = wgetch(menuwin);

        switch (choice) {
            case KEY_UP:
                highlight--;
                highlight = (highlight+3)%3; // +3 because -ve mod is not handled like python here
                break;
            case KEY_DOWN:
                highlight++;
                highlight = highlight%3;
                break;
            default:
                break;
        }

        if (choice == 10) {
            // Exit out of while loop
            flag = false;
        }
        
    }

    wclear(menuwin); // Clear the window contents (it also clears the border as well)
    mvwprintw(menuwin, 2, 1, "Your choice is : %s", choices[highlight]);
    wrefresh(menuwin);
    

    getch();
    endwin();
    return 0;
}
