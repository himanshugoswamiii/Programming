#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int rank, size;
    int number;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (size < 2) {
        printf("This program requires at least 2 processes.\n");
        MPI_Finalize();
        return 1;
    }

    if (rank == 0) {
        // Get number input from the terminal
        scanf("%d", &number);
        // Sender process
        MPI_Send(&number, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
        printf("Sender: Sent number %d to Receiver.\n", number);
    } else if (rank == 1) {
        // Receiver process
        MPI_Recv(&number, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Receiver: Received number %d from Sender.\n", number);
    }

    MPI_Finalize();
    return 0;
}
