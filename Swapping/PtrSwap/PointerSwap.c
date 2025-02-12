#include <stdio.h>
int main() {
    int a = 5, b = 3;
    int *ptr1 = &a, *ptr2 = &b, *temp;
    printf("Before Swapping\n");
    printf("a = %d, b = %d\n", a, b);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    // Swapping
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("After Swapping\n");
    printf("a = %d, b = %d\n", a, b);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    return 0;
}