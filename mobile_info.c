Mobile Phone Information System:

c
#include <stdio.h>
int main() {
    char brand[20], model[20], color[20];
    int serial, battery;
    float price;
    printf("Enter Brand Name: ");
    scanf("%s", brand);
    printf("Enter Model Name: ");
    scanf("%s", model);
    printf("Enter Serial Number: ");
    scanf("%d", &serial);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Color: ");
    scanf("%s", color);
    printf("Enter Battery Capacity (mAh): ");
    scanf("%d", &battery);
    printf("\nMobile Phone Information:\nBrand: %s\nModel: %s\nSerial Number: %d\nPrice: %.2f\nColor: %s\nBattery: %dmAh\n",
           brand, model, serial, price, color, battery);
    return 0;
}
