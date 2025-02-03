#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee E[3];
    int i, highestPaidIndex = 0;
    
    // Input employee data
    for (i = 0; i < 3; i++) {
        printf("Enter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", E[i].name);
        printf("ID: ");
        scanf("%d", &E[i].id);
        printf("Salary: ");
        scanf("%f", &E[i].salary);
    }
    
    // Find the highest-paid employee
    for (i = 1; i < 3; i++) {
        if (E[i].salary > E[highestPaidIndex].salary) {
            highestPaidIndex = i;
        }
    }
    
    // Output the highest-paid employee
    printf("\nHighest Paid Employee:\n");
    printf("Name: %s\n", E[highestPaidIndex].name);
    printf("ID: %d\n", E[highestPaidIndex].id);
    printf("Salary: %.2f\n", E[highestPaidIndex].salary);
    
    return 0;
}
