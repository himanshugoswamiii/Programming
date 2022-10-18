#include <stdio.h>
#include <unistd.h> //sleep
#include <string.h> //strcpy
#include <pthread.h>

struct sData {char text[100];};


void *myfunc(void *voidData) {
    struct sData *data = voidData;
    for (int i=0; i<8; i++) {
        printf ("(i = %d) data text is %s \n", i, data->text);
        sleep(1);
    }
    return NULL;
}

void anotherfunc() {
    for (int i=0; i<3; i++) {
        sleep(1); //sleep for 1s
        printf("(i = %d) this is another func! \n", i);
    }
}

int main() {
    struct sData sd;
    int tret;
    pthread_t tid; // declare a new variable of type pthread_t tid to identify the thread in the system
    strcpy(sd.text, "earthinversion");
    tret = pthread_create(&tid, NULL, myfunc, &sd); // args: pointer to thread id, attributes, function name, arguments to this function
    anotherfunc();
    pthread_join(tid, NULL); 

    return 0;
}
