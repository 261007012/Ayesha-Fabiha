#include <stdio.h>

int add3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("Sum = %d\n", add3(x, y, z));
    return 0;
}
