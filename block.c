Block Scope:

#include <stdio.h>
int main() {
    int x = 10;
    {
        int y = 20;
        printf("Inside block: x = %d, y = %d\n", x, y);
    }
    printf("Outside block: x = %d\n", x);
    // printf("Outside block: y = %d\n", y); // Compilation error, y not accessible here
    return 0;
}
