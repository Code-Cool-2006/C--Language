#include <stdio.h>

int main (){

int age ;

printf("Voteing Declaration\n") ;
printf("Enter your current age : ");
scanf("%d" , &age) ;

if(age >= 18) 
printf("You are eligible to vote\n");
else 
printf("You are not eligible to vote");


return 0 ;
}