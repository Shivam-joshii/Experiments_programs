Employee Data Entry and Display using functions:


#include <stdio.h>

void displayEmployee(char name[], int id, char dept[], float salary) {
    printf("Name: %s\nID: %d\nDepartment: %s\nSalary: %.2f\n", name, id, dept, salary);
}

int main() {
    char name[50], dept[50];
    int id;
    float salary;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter department: ");
    scanf("%s", dept);
    printf("Enter salary: ");
    scanf("%f", &salary);
    displayEmployee(name, id, dept, salary);
    return 0;
}
