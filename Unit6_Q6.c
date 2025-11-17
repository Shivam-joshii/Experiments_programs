// Nested Structure for Employee Birthday and Salary
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date dob;
};

int main() {
    struct Employee e;
    printf("Enter name, id, salary, date of birth (day month year):\n");
    scanf("%s %d %f %d %d %d", e.name, &e.id, &e.salary, &e.dob.day, &e.dob.month, &e.dob.year);

    printf("Name: %s\nID: %d\nSalary: %.2f\nDOB: %02d-%02d-%04d\n",
            e.name, e.id, e.salary, e.dob.day, e.dob.month, e.dob.year);
    return 0;
}
