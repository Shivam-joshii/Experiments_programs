Experiment Set 3: Functions Calculate Area of a Circle:


#include <stdio.h>
#define PI 3.14159

double areaOfCircle(double radius) {
    return PI * radius * radius;
}

int main() {
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Area of circle = %.2lf\n", areaOfCircle(r));
    return 0;
}
