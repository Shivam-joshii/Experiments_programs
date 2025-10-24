Local Variable Access and comparison with global variable:


#include <stdio.h>

int globalVar = 50;

void func() {
    int localVar = 100;
    printf("Local variable inside function: %d\n", localVar);
    printf("Global variable inside function: %d\n", globalVar);
}

int main() {
    func();
    // printf("Local variable outside function: %d\n", localVar); // This will cause an error
    printf("Global variable inside main: %d\n", globalVar);
    return 0;
}
