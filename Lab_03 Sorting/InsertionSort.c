#include <stdio.h>
#include <time.h>
#define SIZE 1000

void insertionSort(int arr[], int n) {
    for (int i = 2; i < n; i++) {
        int x = arr[i];
        int j = i - 1;
        while (x < arr[j]) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = x; 
    }
}

int main() {

    int arr[SIZE];

    FILE *file;
    file = fopen("Worst_1000.txt", "r");
    // file = fopen("Best_1000.txt", "r");
    // file = fopen("Avg_1000.txt", "r");

    if (file == NULL) {
        printf("Errro, Opening Worst_1000.txt\n");
    }
    // if (file == NULL) {
    //     printf("Error, Opening Best_1000.txt\n");
    // }
    // if (file == NULL) {
    //     printf("Error, Opening Avg_1000.txt\n");
    // }
    
    for (int i = 0; i < SIZE; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);
    
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    insertionSort(arr, SIZE);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted Array : ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
    }
    
    printf("\nExecution Time = %f Seconds\n", cpu_time_used);
    return 0;
}