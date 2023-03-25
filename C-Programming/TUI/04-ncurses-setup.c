#include <curses.h>
#include <ncurses.h>
int main ()
{
    initscr();
    noecho(); // whatever user types do no show on the screen


    int height = 10;
    int width = 20;
    int start_y = 10;
    int start_x = 10;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();


    // border around the window
    // box(win, 'a', 'b');
    wborder(win, 'a', 'b', 'c', 'd', '*', '#', '$', '&');

    // Print inside the window
    // wprintw(win, "hello world"); // Prints to the left corner
    mvwprintw(win, 2, 2, "hello world"); // prints to the specific coordinates

    wrefresh(win);

    int x = getch();
    printw("%d", x);

    getch();
    endwin();
    return 0;
}
