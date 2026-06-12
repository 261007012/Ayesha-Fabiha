#include <stdio.h>

int main() {
    int num, digit;
    int evenCount = 0, oddCount = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        num = num / 10;
    }

    printf("Even digits = %d\n", evenCount);
    printf("Odd digits = %d\n", oddCount);

    return 0;
}
