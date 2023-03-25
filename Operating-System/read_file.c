#include <stdio.h>
#include <fcntl.h> // for open(), O_RDONLY
#include <string.h>
#include <unistd.h> // For close()
#include <stdlib.h> // For exit()

int main ()
{
    char *c = (char *) calloc(100, sizeof(char)); // Used for reading from the file

    /*  OPENING THE FILE */
    int fd = open("himanshu.txt", O_RDONLY);
    // Opening the file in read mode 

    if (fd == -1) {
        printf("File doesn't exist or Some error occured\n");
        exit(1);
    }
    else {
        printf("File opened successfully\n");
    }

    /*  READING FROM THE FILE */
    read(fd, c, 20);
    // 20 : bytes to read from the file

    printf("The file contains : %s\n", c);


    /*  CLOSING THE FILE */
    if (close(fd) == -1){
        printf("Error occured while closing the file\n");
        exit(1);
    }
    else {
        printf("File closed successfully\n");
    }


    printf("Program completed");

    
    return 0;
}
