#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[100] = "World!";
    char result[200];

    strcpy(result, str1);
    printf("Copied string: %s\n", result);

    return 0;
}