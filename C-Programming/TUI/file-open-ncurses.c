#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_FILENAME_LENGTH 256
#define BUFFER_SIZE 1024

int main()
{
    char filename[MAX_FILENAME_LENGTH];
    int file;
    char buffer[BUFFER_SIZE];
    int i;

    // Initialize ncurses
    initscr();
    cbreak();

    // Prompt the user for a file name
    mvprintw(0, 0, "Enter a file name: ");
    getstr(filename);

    // Open the file
    file = open(filename, O_RDONLY);
    if (file < 0)
    {
        // Display an error message if the file could not be opened
        mvprintw(2, 0, "Could not open file %s", filename);
        getch();
        endwin();
        return -1;
    }

    // Read the first 1024 bytes from the file
    read(file, buffer, BUFFER_SIZE);

    // Close the file
    close(file);

    // Display the contents of the buffer in a window
    WINDOW *win = newwin(20, 50, 5, 5);
    box(win, 0, 0);
    mvwprintw(win, 1, 1, "Contents of file %s:", filename);
    int j=3;
    int k=1;
    for (i = 0; i < BUFFER_SIZE; i++)
    {
        if (buffer[i] == '\n') {
            j++;
            k=1;
            continue;
        }
        mvwprintw(win, j, k++, "%c ", buffer[i]);
    }
    wrefresh(win);

    // Wait for a key press before exiting
    getch();

    // Clean up ncurses
    endwin();

    return 0;
}
