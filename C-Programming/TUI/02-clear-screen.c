#include <ncurses.h>

int main ()
{
    initscr();

    move(10, 10);
    printw("Hello World");

    int x = getch();
    clear();
    move(5, 5);
    printw("%d", x);

    getch();
    endwin();
    return 0;
}
