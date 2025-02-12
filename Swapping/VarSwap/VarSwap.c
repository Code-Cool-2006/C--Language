#include <stdio.h>

int main() {
    int a = 5, b = 3, temp;
    printf("Before Swapping\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}