// Unnamed pipe
#include <stdio.h>
#include <unistd.h>
int main ()
{
    int fd[2];

    pipe(fd); // create a pipe

    int id = fork();
    if (id == 0) {
        // in child process : we want to write
        close(fd[0]);
        char buf[20];
        scanf("%s", buf);
        write(fd[1], buf, sizeof(buf));
        close(fd[1]);
    } else {
        close(fd[1]);
        char tuf[20];
        read(fd[0], tuf, sizeof(tuf));

        printf("%s\n", tuf);
        close(fd[0]);
    }


    return 0;
}
