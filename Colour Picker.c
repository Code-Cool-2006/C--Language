#include <stdio.h>

int main() 
{
    int num;

    printf("This is random colour picker\n");

    printf("Enter a number between 1 to 9 = [1, 2, 3, 4, 5, 6, 7, 8, 9]: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("The surprise colour is = Red\n");
            break;
        case 2:
            printf("The surprise colour is = Green\n");
            break;
        case 3:
            printf("The surprise colour is = Blue\n");
            break;
        case 4:
            printf("The surprise colour is = Violet\n");
            break;
        case 5:
            printf("The surprise colour is = Yellow\n");
            break;
        case 6:
            printf("The surprise colour is = Pink\n");
            break;
        case 7:
            printf("The surprise colour is = Purple\n");
            break;
        case 8:
            printf("The surprise colour is = Cyan\n");
            break;
        case 9:
            printf("The surprise colour is = Black\n");
            break;
        default:
            printf("Error, Wrong Number Entered\n");
            break;
    }

    return 0;
}


