#include <stdio.h>

int main() {
    int num, digit, max;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    max = 0;

    while (num > 0) {
        digit = num % 10;

        if (digit > max) {
            max = digit;
        }

        num = num / 10;
    }

    printf("Largest digit = %d\n", max);

    return 0;
}
