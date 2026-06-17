#include <stdio.h>

int main() {
    int n;

    printf("Enter Size Of Array : ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nAll Possible Subarrays:\n");

    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {

            printf("[ ");

            for(int k = start; k <= end; k++) {
                printf("%d ", arr[k]);
            }

            printf("]\n");
        }
    }

    printf("\nTotal Subarrays = %d\n", n * (n + 1) / 2);

    return 0;
}