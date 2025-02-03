#include <stdio.h>

int main() {
    int i, n;
    float x, sum, t;

    printf("Enter the value of x (Angle in Degree) : ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    x *= (3.14159 / 180);
    t = x;
    sum = x;

    for (i = 1; i <= n; i++) {
        t = (t * (-1) * x * x) / ((2 * i) * (2 * i + 1));
        sum += t;
    }
    printf("The value of sin(%.4f) = %.4f\n", x, sum);
}