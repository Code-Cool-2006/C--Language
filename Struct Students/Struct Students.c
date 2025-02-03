#include <stdio.h>

struct Student {
    char name[50];
    char USN[50];
    int Marks;
} S[10];

int main() {
    double average = 0;
    int num, i;
    printf("Enter the number of Students: ");
    scanf("%d", &num);

    printf("Enter the details of Students:\n");
    for (i = 0; i < num; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", S[i].name);
        printf("Enter USN of student %d: ", i + 1);
        scanf("%s", S[i].USN);  
        printf("Enter Marks of student %d: ", i + 1);
        scanf("%d", &S[i].Marks);
        average += S[i].Marks;    
    }
    average /= num;
    printf("\nAverage Marks: %.2f\n", average);

    printf("\nStudents scoring above average Marks:\n\n");
    for (i = 0; i < num; i++) {
        if (S[i].Marks > average) {
            printf("Name: %s\nUSN: %s\nMarks: %d\n", S[i].name, S[i].USN, S[i].Marks);
        }
    }

    printf("\nStudents scoring below average Marks:\n\n");
    for (i = 0; i < num; i++) {
        if (S[i].Marks < average) {
            printf("Name: %s\nUSN: %s\nMarks: %d\n", S[i].name, S[i].USN, S[i].Marks);
        }
    }

    return 0;
}
