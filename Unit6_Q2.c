// Student Structure: Read & Display
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct Student s;
    printf("Enter name, roll, and mark:\n");
    fgets(s.name, 50, stdin);
    scanf("%d", &s.roll);
    scanf("%f", &s.mark);

    printf("Student Details:\nName: %sRoll: %d\nMark: %.2f\n", s.name, s.roll, s.mark);
    return 0;
}
