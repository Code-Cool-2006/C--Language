#include <stdio.h>
#include <stdio.h>
int sum(int x, int y);
int main() {
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = sum(a, b);
    printf("Sum of two numbers: %d", result);
    return 0;
}
int sum(int x, int y) {
    return x + y;
}