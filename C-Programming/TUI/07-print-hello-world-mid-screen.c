#include <ncurses.h>

int main(){
    initscr();

    int yMax, xMax;

    getmaxyx(stdscr, yMax, xMax);

    move(yMax/2, (xMax-14)/2);
    // 14 is the length of our string
    printw("Hello, Curses!");

    getch();
    endwin();
    return 0;
}
