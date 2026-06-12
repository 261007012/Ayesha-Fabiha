#include <stdio.h>

int findMin(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Minimum = %d\n", findMin(x, y));
    return 0;
}
