#include <stdio.h>
#include <conio.h>
void sum(int x, int y, int *s);
int main() {
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b, &s);
    printf("Sum of two numbers: %d", s);
    return 0;
}
void sum(int x, int y, int *s) {
    *s = x + y;
}