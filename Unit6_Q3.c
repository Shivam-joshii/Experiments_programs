//Sort Student Records by Roll Number
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char fname[20];
    char lname[20];
};

void sortByRoll(struct Student arr[], int n) {
    struct Student temp;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i].roll_no > arr[j].roll_no) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    struct Student s[5];
    for(int i=0;i<5;i++) {
        printf("Enter roll_no, first name, last name for student %d:\n", i+1);
        scanf("%d %s %s", &s[i].roll_no, s[i].fname, s[i].lname);
    }

    sortByRoll(s, 5);

    printf("Sorted Records:\n");
    for(int i=0;i<5;i++) {
        printf("Roll No: %d, First Name: %s, Last Name: %s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }
    return 0;
}
