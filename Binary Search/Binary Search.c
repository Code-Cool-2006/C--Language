#include <stdio.h>

int main() {
    int arr[100], i ,Key, num;
    int pos=-1, found=0, beg, mid, end;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    printf("Enter the elements of the array in sorted order: ");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &Key);

    beg = 0;
    end = num - 1;

    while(beg <= end) {
        mid = (beg + end) / 2;
        if(arr[mid] == Key) {
            pos = mid;
            found = 1;
            break;
        } else if(arr[mid] < Key) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if(found==1) {
        printf("Number found at position %d\n", pos + 1);
    } else {
        printf("Number not found\n");
    }
 
    return 0;
}
