#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("Before Swapping\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After Swapping\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}