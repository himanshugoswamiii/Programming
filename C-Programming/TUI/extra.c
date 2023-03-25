#include <curses.h>
#include <ncurses.h>

int main()
{
    initscr();
    noecho();
    cbreak();

    WINDOW *mywin = newwin(10, 30, 5, 5); // create a new window
    box(mywin, 0, 0); // draw a border around the window
    refresh();
    wrefresh(mywin); // refresh the window to display the border

    mvwprintw(mywin, 1, 1, "This is some text"); // add some text to the window
    wrefresh(mywin); // refresh the window to display the text

    getch(); // wait for a key press

    werase(mywin); // clear the contents of the window
    wrefresh(mywin); // refresh the window to display the cleared contents

    getch(); // wait for a key press

    endwin();
    return 0;
}
