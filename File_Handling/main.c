#include<stdio.h>
int main(){

// // File Reading first line
//     FILE *fptr;
//     fptr = fopen("test.txt","r+");
//     char content[50000];
//     if(fptr != NULL){
//         fgets(content,50000,fptr);
//         printf("%s",content);   
//         fclose(fptr); // Close the file after reading
//     }
//     else{
//         printf("Error!");
//         return -1;
//     }

//################################################################//

// File Reading Every line
    FILE *fptr;
    char content[5000];
    fptr = fopen("test.txt","r");
    if(fptr != NULL){
        while(fgets(content,5000,fptr)){
        printf("%s",content);   
             }
    }
    else{
        printf("Error!");
        return -1;
    }
    fclose(fptr); // Close the file after reading

//#################################################################//

//// File Writing
    // FILE *fptr;
    // char content[5000];
    // fptr = fopen("writing.txt","w");
    // fputs("Hello World\n",fptr);
    // fputs("This is File Writing\n",fptr);
    // fclose(fptr);

//#################################################################//

//// File Appending
    // FILE *fptr;
    // char content[5000];
    // fptr = fopen("writing.txt","a");
    // fputs("Hello World\n",fptr);
    // fputs("I am writting this the 2nd time\n",fptr);
    // fclose(fptr);

//#################################################################//

    return 0;
    }