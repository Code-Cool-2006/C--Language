// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int num = 1, rows, i, j;
   
   printf("Enter the no of rows: ");
   scanf("%d", &rows);
   
   for(i = 1; i <= rows; i++) {
       for(j = 1; j <= i; j++) {
           printf("%d ", num);
           num++;
       }
       printf("\n");
   }
   
   return 0;
}