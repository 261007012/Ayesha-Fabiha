#include <stdio.h>

int main() {
    int n, i, j;
    long long fact;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = 1;

        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }

        sum = sum + fact;
    }

    printf("Sum of factorials from 1 to %d = %lld\n", n, sum);

    return 0;
}
