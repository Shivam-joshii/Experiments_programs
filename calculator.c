//Simple calculator using switch case (example):


#include <stdio.h>
int main() {
    char op;
    double num1, num2;
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    switch(op) {
        case '+': printf("Result = %.2lf\n", num1 + num2); break;
        case '-': printf("Result = %.2lf\n", num1 - num2); break;
        case '*': printf("Result = %.2lf\n", num1 * num2); break;
        case '/':
            if(num2 != 0) printf("Result = %.2lf\n", num1 / num2);
            else printf("Division by zero error.\n");
            break;
        case '%': 
            if((int)num2 != 0) printf("Result = %d\n", (int)num1 % (int)num2);
            else printf("Division by zero error.\n");
            break;
        default: printf("Invalid operator.\n");
    }
    return 0;
}
