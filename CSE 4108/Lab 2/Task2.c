#include<stdio.h>

int main(void){

    int itemNum, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit Price\tPurchase Date\n");
    printf("%d\t\t$%.2f\t\t%.2d/%.2d/%.4d\n", itemNum, price, mm, dd, yyyy);

    return 0;
}
