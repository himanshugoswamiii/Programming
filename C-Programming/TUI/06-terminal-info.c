#include <ncurses.h>

int main(){
    initscr();

    // Parameters 1: window ptr, 2: y, 3: x

    int y, x, yBeg, xBeg, yMax, xMax;

    getbegyx(stdscr, yBeg, xBeg); // beginning position
    getmaxyx(stdscr, yMax, xMax); // max position

    printw("xBeg: %d , yBeg: %d \n", xBeg, yBeg);
    printw("xMax: %d , yMax: %d \n", xMax, yMax);

    getyx(stdscr, y, x); // Current position of cursor
    printw("x: %d , y: %d \n", x, y);

    getch();
    endwin();
    return 0;
}
