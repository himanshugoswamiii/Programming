// Avoid race conditions
#include <stdio.h>
#include <pthread.h>

int mails = 0;
pthread_mutex_t mutex;

void* routine(){
    for(int i=0; i<1000000; i++){
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main ()
{
    pthread_t t1, t2, t3; // the three threads
    pthread_mutex_init(&mutex, NULL);  // for initializing the mutex

    pthread_create(&t1, NULL, routine, NULL);
    pthread_create(&t2, NULL, routine, NULL);
    pthread_create(&t3, NULL, routine, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    pthread_mutex_destroy(&mutex);

    printf("No of mails is : %d\n", mails);

    return 0;
}
