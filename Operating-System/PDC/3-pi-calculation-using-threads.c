/* pi -calculation using pi Approximation formula */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

static long num_steps = 100000000;
double step;

struct ThreadData {
    int id;
    int nthreads;
    double sum;
};

void *compute_pi(void *arg) {
    struct ThreadData *td = (struct ThreadData *) arg;
    int i;
    double x;
    int id = td->id;
    int nthrds = td->nthreads;

    for (i = id, td->sum = 0.0; i < num_steps; i += nthrds) {
        x = (i + 0.5) * step;
        td->sum += 4.0 / (1.0 + x * x);
    }

    return NULL;
}

int main() {
    int i, nthreads = 4;
    double pi, sum = 0.0;
    pthread_t *threads = malloc(nthreads * sizeof(pthread_t));
    struct ThreadData *tds = malloc(nthreads * sizeof(struct ThreadData));
    step = 1.0/(double) num_steps;

    for (i = 0; i < nthreads; i++) {
        tds[i].id = i;
        tds[i].nthreads = nthreads;
        pthread_create(&threads[i], NULL, compute_pi, &tds[i]);
    }

    for (i = 0; i < nthreads; i++) {
        pthread_join(threads[i], NULL);
        sum += tds[i].sum;
    }

    pi = step * sum;

    printf("pi = %.9f\n", pi);

    free(threads);
    free(tds);

    return 0;
}
