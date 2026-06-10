#include <stdio.h>
#include <stdlib.h>

/*
Naive Approach (Iterative Checking) :

Time Complexity: O(m)
Space Complexity: O(1)
*/
int closestNumber(int n, int m) {
    int ans = n;

    for (int i = 0; i <= m; i++) {
        if ((n - i) % m == 0) {
            ans = n - i;
            break;
        }

        if ((n + i) % m == 0) {
            ans = n + i;
            break;
        }
    }

    return ans;
}

void main() {
    int n, m;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);

    printf("Closest Number = %d", closestNumber(n, m));

}