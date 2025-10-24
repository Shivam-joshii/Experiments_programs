Calculate Monthly Salary with HRA and DA:


#include <stdio.h>

double calculateSalary(double basic, int isMetro) {
    double hra = (isMetro ? 0.15 : 0.10) * basic;
    double da = 0.05 * basic;
    return basic + hra + da;
}

int main() {
    double basic, monthlySalary;
    int cityType;
    printf("Enter basic salary: ");
    scanf("%lf", &basic);
    printf("Enter 1 if metro city, 0 otherwise: ");
    scanf("%d", &cityType);
    monthlySalary = calculateSalary(basic, cityType);
    printf("Monthly salary including HRA and DA = %.2lf\n", monthlySalary);
    return 0;
}
