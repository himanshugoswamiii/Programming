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
    pthread_t t_array[4];

    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < 4; i++) {
        if (pthread_create(&t_array[i], NULL, routine, NULL) != 0){
            perror("Failed to create thread\n");
            return 1;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (pthread_join(t_array[i], NULL) != 0) {
            return 2;
        }
        
    }

    pthread_mutex_destroy(&mutex);

    printf("No of mails : %d\n", mails);
            
    return 0;
}
