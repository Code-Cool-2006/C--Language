#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "rishabh";
    char str2[] = "RishabC";

    int result1 = strcmp(str1, str2);
    printf("Result1: %d\n", result1);
    if (result1 == 0) {
        printf("str1 and str2 are equal\n");
    } else if (result1 < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // Print the lengths of str1 and str2
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    return 0;
}