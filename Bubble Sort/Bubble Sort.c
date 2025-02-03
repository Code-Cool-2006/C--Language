#include <stdio.h>

int main(){
    int i, j, temp, a[10], num;
    
    printf("Enter the number of numbers: ");
    scanf("%d", &num);
    printf("Enter the Numbers: ");
    for(i = 0; i < num; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < num - 1; i++){
        for(j = 0; j < num - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is: \n");
    for(i = 0; i < num; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}