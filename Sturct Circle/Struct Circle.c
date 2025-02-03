#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

struct Circle{
    int R;
    float area;
    float peri;
};
     
int main(){ 
    struct Circle C[2] ;  
    int i;
    
    for(i=0;i<2;i++){
        printf("Enter the Radius of Circle %d :",i+1);
        scanf("%d",&C[i].R);
    }
    for(i=0;i<2;i++){
        C[i].area = 3.14*C[i].R*C[i].R ;
        C[i].peri = 2*3.14*C[i].R ;
    }
    
    for(i=0;i<2;i++){
    printf("The Area and Perimeter of Circle %d are : %.2f and %.2f \n", i+1, C[i].area, C[i].peri);
    }
    
    return 0 ;
    
}