Product Information System:


#include <stdio.h>
int main() {
    char name[20], manufacturer[20], category[20];
    int id, quantity;
    float price;
    printf("Enter Product Name: ");
    scanf("%s", name);
    printf("Enter Product ID: ");
    scanf("%d", &id);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Manufacturer: ");
    scanf("%s", manufacturer);
    printf("Enter Category: ");
    scanf("%s", category);
    printf("\nProduct Information:\nName: %s\nID: %d\nQuantity: %d\nPrice: %.2f\nManufacturer: %s\nCategory: %s\n",
           name, id, quantity, price, manufacturer, category);
    return 0;
}
