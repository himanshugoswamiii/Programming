#include <ncurses.h>
int main ()
{
    initscr();

    if(!has_colors())
    {   
        printw("Terminal doesn't support colors");
        getch();
        return -1;
    }

    start_color();

    init_pair(1, COLOR_RED, COLOR_WHITE);
    // color pallete: no,  forground, background

    attron(COLOR_PAIR(1));
    mvprintw(10, 10, "hello world");
    attroff(COLOR_PAIR(1));

    getch();
    endwin();
    
    return 0;
}
