#include <ncurses.h>

int main ()
{
    // initializes the screen
    initscr();

    // prints a string (const char *) to a window
    printw("Hello World");

    // refreshes the screen to match what's in memory
    refresh();

    // wait for user input
    getch();

    //deallocates the memory and end ncurses
    endwin();
    return 0;
}
