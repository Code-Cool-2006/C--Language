#include <stdio.h>

int main (){

int amt ;

printf("welcome to store\n") ;
printf("Enter your Shopping amount : ");
scanf("%d" , &amt) ;

if(amt < 500) ;
amt += 50 ;

printf("Your bill amount is : %d \n" , amt);
printf("Thank you for shopping with us");

return 0 ;
}