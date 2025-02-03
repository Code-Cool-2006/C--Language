// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
int i,j,k,p,q,m,n,a[10][10],b[10][10],pro[10][10];

printf("Enter the order of First Matrix : ");
scanf("%d %d",&m,&n);
printf("Enter the order of Second Matrix : ");
scanf("%d %d",&p,&q);

if(n==p)
printf("The Matrices can be Multiplied.\n\n");
else
printf("The Matrices can't be Multilplied.\n");
exit ;
printf("Enter the elements of Matrix 1 : \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the elements of Matrix 2 : \n");
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("[%d][%d] = ",i,j);
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<p;j++){
        pro[i][j] = 0;
    }
}

for(i=0;i<m;i++){
    for(j=0;j<p;j++){
        for(k=0;k<n;k++){
            pro[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("The Product of 2 Matrices is : \n");
for(i=0;i<m;i++){
    for(j=0;j<p;j++){
        printf("%d ",pro[i][j]);
    }
    printf("\n");
}
return 0;
}