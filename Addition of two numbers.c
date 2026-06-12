#include <stdio.h>

int add2(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", add2(x, y));
    return 0;
}
