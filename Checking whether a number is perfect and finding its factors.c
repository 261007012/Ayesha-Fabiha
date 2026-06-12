#include <stdio.h>

int main() {
    int num, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n");

    if (sum == num && num != 0) {
        printf("%d is a Perfect Number\n", num);
    } else {
        printf("%d is not a Perfect Number\n", num);
    }

    return 0;
}
