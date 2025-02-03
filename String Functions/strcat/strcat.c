#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[100] = "World!";
    char result[200];

    strcat(result, str2);
    printf("Concatenated string: %s\n", result);

    return 0;
}