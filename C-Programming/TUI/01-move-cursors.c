#include <ncurses.h>

int main()
{
    initscr();

    // Move the cursor to specified location
    // move(int y, int x)  : x and y coordinates

    move(10, 30);
    printw("Hello World");

    getch();
    endwin();

    return 0;
}
