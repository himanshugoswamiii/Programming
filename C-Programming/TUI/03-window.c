#include <ncurses.h>
int main ()
{
    initscr();


    int height = 10;
    int width = 20;
    int start_y = 10;
    int start_x = 10;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();


    // border around the window
    box(win, 0, 0);

    // Print inside the window
    // wprintw(win, "hello world"); // Prints to the left corner
    mvwprintw(win, 2, 2, "hello world"); // prints to the specific coordinates

    wrefresh(win);

    getch();
    endwin();
    return 0;
}
