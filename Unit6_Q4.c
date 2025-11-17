//Employee Structure & Average Salary
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    float total_salary = 0;

    for(int i=0; i<n; i++) {
        printf("Enter name, address, age, salary for employee %d:\n", i+1);
        scanf("%s %s %d %f", e[i].name, e[i].address, &e[i].age, &e[i].salary);
        total_salary += e[i].salary;
    }
    printf("Average Salary = %.2f\n", total_salary / n);
    return 0;
}
