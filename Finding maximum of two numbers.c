#include <stdio.h>

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d\n", findMax(x, y));
    return 0;
}
