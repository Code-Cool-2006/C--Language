#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Define and Initialize Structure Variable
    struct Student student1 = {"Alice", 20, 3.8};

    // Access Structure Members
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}
