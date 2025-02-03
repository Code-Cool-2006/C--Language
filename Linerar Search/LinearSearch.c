#include <stdio.h>

int main() {
    int size;
    int arr[100];
    int target;
    int result = -1;
printf("Enter the size of the array: ");
scanf("%d", &size);
printf("Enter the elements of the array: ");
for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
}
printf("Enter the target element: ");
scanf("%d", &target);


    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result = i; // Store the index of the target element
            break;
        }
    }

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
