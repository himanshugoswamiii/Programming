// Sum of an array using two processes
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main ()
{
    int arr[]= {1,2,3,4,5,10};
    int size=sizeof(arr)/sizeof(int);
    int start, end;
    int fd[2];
    if (pipe(fd) == -1) {
        return 1;
    }

    int id = fork();
    if (id == -1) {
        return 2;
    }

    if (id == 0) {
        // Child process
        start = 0;
        end = size/2;
    }
    else {
        start = size/2;
        end = size;
    }

    int sum = 0;
    int i;
    for (i = start; i<end; i++){
        sum += arr[i];
    }

    printf("Calcualted partial sum : %d\n",sum);

    if (id == 0){
        // pipe sum to parent
        close(fd[0]);
        write(fd[1], &sum, sizeof(int));
        close(fd[1]);
    }
    else {
        // read from the pipe in parent
        close(fd[1]);
        int sumFromChild;
        read(fd[0], &sumFromChild, sizeof(sumFromChild));
        close(fd[0]);

        printf("Total sum is : %d\n", sum+sumFromChild);
        wait(NULL); // Wait for child to finish
    }
    return 0;
}
