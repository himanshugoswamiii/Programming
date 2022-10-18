#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
int x=5;
void *routine(){
    printf("Test from threads: %d\n",x);
    x=x+1;
    // This is done to test if these two are running in parallel
}

void *other(){
    printf("this is other %d\n",x);
}

int main ()
{
    pthread_t t1, t2, t3; // Two threads
    // To initialze a thread
    pthread_create(&t1, NULL, *routine, NULL);
    pthread_create(&t2, NULL, *routine, NULL);
    pthread_create(&t3, NULL, *other, NULL);
    // Last NULL is the argument to the function , since we can't pass function as argument we have to use pointer
    pthread_join(t1, NULL); // Wait for thread
    pthread_join(t2, NULL); // Wait for thread
    pthread_join(t3, NULL); // Wait for thread

    
    return 0;
}
