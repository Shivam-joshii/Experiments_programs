// Display Employees in Name Order
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[100];
    float salary;
};

void sortEmployees(struct Employee e[], int n) {
    struct Employee temp;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}

int main() {
    struct Employee e[5];
    for(int i=0; i<5; i++) {
        printf("Enter name, address, salary for employee %d:\n", i+1);
        scanf("%s %s %f", e[i].name, e[i].address, &e[i].salary);
    }
    sortEmployees(e, 5);

    printf("Sorted Employee Details:\n");
    for(int i=0; i<5; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f\n", e[i].name, e[i].address, e[i].salary);
    }
    return 0;
}
