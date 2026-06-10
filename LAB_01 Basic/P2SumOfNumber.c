#include <stdio.h>
#include <time.h>

int Sum(int n) {
    if (n == 1) {
        return 1;
    }

    return n + Sum(n - 1);
}

void main() {
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int ans = Sum(n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum of Numbers from 1 to %d = %d\n", n, ans);
    printf("Execution Time = %f Seconds\n", cpu_time_used);

}