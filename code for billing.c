#include <stdio.h>

int main()
{
    char item[50];
    int quantity;
    float price, total;

    printf("===== BILLING SYSTEM =====\n");

    printf("Enter item name: ");
    scanf("%49s", item);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\n======= BILL =======\n");
    printf("Item Name      : %s\n", item);
    printf("Quantity       : %d\n", quantity);
    printf("Price per Item : Rs. %.2f\n", price);
    printf("-------------------------\n");
    printf("Total Amount   : Rs. %.2f\n", total);
    printf("=========================\n");

    return 0;
}