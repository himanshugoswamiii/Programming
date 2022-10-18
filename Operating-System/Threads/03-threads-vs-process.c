#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int x=2;

void* func1(){
    x++;
    sleep(2);
    printf("Thread 1: %d\n",x);
}

void* func2(){
    sleep(2);
    // sleep : So that it was executed after x++ in above
    printf("Thread 2: %d\n",x);
}

int main ()
{
    pthread_t p1,p2;
    pthread_create(&p1, NULL, &func1, NULL);
    pthread_create(&p2, NULL, &func2, NULL);

    pthread_join(p1, NULL);
    pthread_join(p2, NULL);

    return 0;
}
