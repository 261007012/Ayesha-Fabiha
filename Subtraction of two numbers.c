#include <stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Difference = %d\n", subtract(x, y));
    return 0;
}
