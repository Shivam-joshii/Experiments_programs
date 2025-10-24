Experiment Set 5: Variables and Scope

Global Variable Access:


#include <stdio.h>

int globalVar = 100;  // Global variable

void displayGlobal() {
    printf("Global variable inside function: %d\n", globalVar);
}

int main() {
    printf("Global variable inside main: %d\n", globalVar);
    displayGlobal();
    return 0;
}
