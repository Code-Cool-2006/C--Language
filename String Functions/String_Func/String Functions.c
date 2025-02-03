#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_length(char str1[], char str2[]) {
    printf("Length of the first string: %lu\n", strlen(str1));
    printf("Length of the second string: %lu\n", strlen(str2));
}

void concatenate_strings(char str1[], char str2[]) {
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
}

void compare_strings(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal\n");
    } else if (strcmp(str1, str2) > 0) {
        printf("The String %s is greater than %s\n", str1, str2);
    } else {
        printf("The String %s is greater than %s\n", str2, str1);
    }
}

void copy_string(char str1[], char str2[]) {
    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);
}

void reverse_string(char str1[]) {
    int len = strlen(str1);
    for (int i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str1);
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("1. Length of the string\n2. Concatenate the strings\n3. Compare the strings\n4. Copy the string\n5. Reverse the string\n6. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                get_length(str1, str2);
                break;
            case 2:
                concatenate_strings(str1, str2);
                break;
            case 3:
                compare_strings(str1, str2);
                break;
            case 4:
                copy_string(str1, str2);
                break;
            case 5:
                reverse_string(str1);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}