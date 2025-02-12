//########################################################################################
// // Quadratic Equation
// #include <math.h> 
// #include <stdio.h> 
// int main( ) { 
//     float a, b, c, D, root1, root2, realPart, imagPart; 
//     printf("Enter coefficients a, b and c: "); 
//     scanf("%f %f %f", &a, &b, &c); 
// //check for zero coefficients 
// if((a==0)||(b==0)||(c==0)) 
// { 
// printf("Invalid coefficients\n"); 
// return 0; 
// } 
//     D = b * b - 4 * a * c; 
//     // condition for real and different roots 
//     if (D> 0) { 
//     root1 = (-b + sqrt(D)) / (2 * a); 
//     root2 = (-b - sqrt(D)) / (2 * a); 
//     printf("Roots are real and distinct \n");
//     printf("root1 = %.2f  and  root2 = %.2f", root1, root2); 
//     } 
//     // condition for real and equal roots 
//     else if (D == 0) { 
//         root1 = root2 = -b / (2 * a); 
//         printf("Roots are real and equal \n"); 
//         printf("root1 = root2 = %.2f ", root1); 
//     } 
//     // if roots are not real 
//     else { 
//         realPart = -b / (2 * a); 
//         imagPart = sqrt(-D) / (2 * a); 
//        printf("Roots are imaginary \n"); 
//         printf("root1 = %.2f + %.2fi  and  root2 = %.2f - %.2fi", realPart, imagPart, realPart,imagPart); 
//     } 
//     return 0;
// }
//########################################################################################
// // Factorial of a number
// #include <stdio.h>
// int main(){
//     int n,fact=1;
//     printf("Enter a Number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("Factorial of %d is %d",n,fact);
//     return 0;
// }
//########################################################################################