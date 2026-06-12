#include <stdio.h>

int multiply2(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Product = %d\n", multiply2(x, y));
    return 0;
}
