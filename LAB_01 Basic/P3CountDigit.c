#include <stdio.h>
#include <time.h>

int CountDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + CountDigits(n / 10);
}

void main() {
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int ans;
    if (n == 0) {
        ans = 1;
    }
    else {
        ans = CountDigits(n);
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Total Digits = %d\n", ans);
    printf("Execution Time = %f Seconds\n", cpu_time_used);

}