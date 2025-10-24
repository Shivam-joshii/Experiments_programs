Display Student Information using a function:


#include <stdio.h>

void displayStudent(char name[], int roll, float marks) {
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", name, roll, marks);
}

int main() {
    char name[50];
    int roll;
    float marks;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);
    displayStudent(name, roll, marks);
    return 0;
}
