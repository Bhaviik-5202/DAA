#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int found = 0;

    for(int start = 1; start < n; start++) {
        int sum = 0;

        for(int j = start; j < n; j++) {
            sum += j;

            if(sum == n) {
                found = 1;
                break;
            }

            if(sum > n)
                break;
        }

        if(found)
            break;
    }

    if(found)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}