//Armstrong number:


#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, digits = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while(original != 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while(original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    if(sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}
