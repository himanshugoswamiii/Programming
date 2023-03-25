// Open a file
// Read data from file
// Write to the console
// Close the file
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main ()
{
    char buffer[1024]; // Can store upto 1024 character (bytes)

    int fd; // File descriptor
    int n1, n2; // For storing return value of read, write

    // OPEN THE FILE
    fd = open("myfile.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error in open");
        return 1; // 1 : means error occured
    }

    // READ DATA FROM THE FILE TO THE buffer varialbe
    n1 = read(fd, buffer, 1024); 
    // read returns: no of bytes written or -1 : error
    if (n1<0) {
        perror("Error in read");
        return 1;
    }

    // WRITE TO THE CONSOLE from buffer
    n2 = write(1, buffer, n1); // 1: STDOUT_FILENO
    if (n2 < 0) {
        perror("Error in write");
        return 1;
    }

    // CLOSE THE FILE
    if (close(fd) < 0) {
        perror("Error in closing the file");
        return 1;
    }

    return 0;
}
