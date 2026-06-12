#include <stdio.h>

float divide2(float a, float b) {
    return a / b;
}

int main() {
    float x, y;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    if (y != 0)
        printf("Quotient = %.2f\n", divide2(x, y));
    else
        printf("Division by zero not allowed\n");

    return 0;
}
