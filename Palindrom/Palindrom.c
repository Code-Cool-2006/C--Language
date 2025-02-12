#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d\n", reversed_num);

    if (original_num == reversed_num)
        printf("%d is a palindrome.\n", original_num);
    else
        printf("%d is not a palindrome.\n", original_num);

    return 0;
}