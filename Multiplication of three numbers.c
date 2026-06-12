#include <stdio.h>

int multiply3(int a, int b, int c) {
    return a * b * c;
}

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Product = %d\n", multiply3(x, y, z));
    return 0;
}
