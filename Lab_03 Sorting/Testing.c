#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

int main() {

    FILE *file;

    file = fopen("Best_100000.txt", "w");
    for (int  i = 0; i < SIZE; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    printf("Best File Generate\n");


    file = fopen("Worst_100000.txt", "w");
    for (int  i = SIZE; i >= 0; i--) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    
    printf("Worst File Generate\n");


    file = fopen("Avg_100000.txt", "w");
    for (int  i = 0; i < SIZE; i++) {
        fprintf(file, "%d\n", rand() % SIZE);
    }
    fclose(file);
    
    printf("Avg File Generate\n");

    return 0;
}