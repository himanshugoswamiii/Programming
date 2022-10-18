// gcc -g -pthread file.c -o file
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void* routine(){
    printf("Test from threads\n");
    sleep(3);
    printf("Ending Thread\n");
    // This is done to test if these two are running in parallel
}

int main(){
    // When you create a thread it executes a function
    pthread_t t1, t2; // Two threads
    // To initialze a thread
    pthread_create(&t1, NULL, *routine, NULL);
    pthread_create(&t2, NULL, *routine, NULL);
    // Last NULL is the argument to the function , since we can't pass function as argument we have to use pointer
    pthread_join(t1, NULL); // Wait for thread
    pthread_join(t2, NULL); // Wait for thread
    printf("This is main()");

    return 0;
}
