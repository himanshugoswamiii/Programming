#include <stdio.h>
#include <fcntl.h> // for open(), O_RDONLY
#include <string.h>
#include <unistd.h> // For close()
#include <stdlib.h> // For exit()

int main ()
{
    /*  OPENING THE FILE */
    int fd = open("newfile.txt", O_WRONLY | O_CREAT);
    // Opening the file in write mode. If the file doesn't exist create it

    if (fd == -1) {
        printf("File doesn't exist or Some error occured\n");
        exit(1);
    }
    else {
        printf("File opened successfully\n");
    }

    /*  WRITE TO THE FILE */
    char str[] = "Student of MCA" ;
    int len = sizeof(str)/sizeof(char);
    int val = write(fd, str, len);

    if (val == -1) {
        printf("Error while writing to the file\n");
    }
    else {
        printf("Writing to file done successfully\n");
    }


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
