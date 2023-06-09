#include <stdio.h>
#include <pthread.h>

int mails = 0;

void* routine(){
    for(int i=0; i<1000000; i++){
        mails++;
        // read mails : copy to the register
        // increment
        // write mails : from register to the variable
    }
    return NULL;
}

int main ()
{
    pthread_t t1, t2; // the two threads
    pthread_create(&t1, NULL, routine, NULL);
    pthread_create(&t2, NULL, routine, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("No of mails is : %d\n", mails);

    return 0;
    return 0;
}
