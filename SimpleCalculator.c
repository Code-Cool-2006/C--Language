#include <stdio.h>
#include <math.h>

int main() 
{
    int a,b,s;
    char op ;
    // Write C code here
    
    printf("This is simple calculator\n");

    printf("Enter any one of the opertor at a time\n[ + , - , * , / ] = ");
    scanf("%c" , &op);
    
    printf("Enter any operand 1: ");
    scanf("%d" , &a);
    printf("Enter any operand 2: ");
    scanf("%d" , &b);

    switch(op)
    {
        case '+':
        s = a+b;
        printf("Sum = %d\n" , s);
        break;

        case '-':
        s = a-b;
        printf("Substraction = %d\n" , s);
        break;

        case '*':
        s = a*b;
        printf("Multiplication = %d\n" , s);
        break;

        case '/':
        s = a/b;
        printf("Division = %d\n" , s);
        break;

        default:printf("Error, wrong Operation");
                break;
    }



    return 0;
}


