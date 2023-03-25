#include <ncurses.h>

int main(){
    initscr();
    noecho();

    // Start here
    WINDOW *inputwin = newwin(3, 50, 10, 5);

    box(inputwin, 0, 0);
    refresh();
    wrefresh(inputwin); // Include them otherwise you won't see the window

    int c = wgetch(inputwin);

    if(c == 'j'){
        mvwprintw(inputwin, 1, 1,  "You pressed j");
        wrefresh(inputwin);
    }

    // end here

    getch();
    endwin();
    return 0;
}
