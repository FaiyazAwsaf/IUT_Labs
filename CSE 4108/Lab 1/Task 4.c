#include<stdio.h>


int main(void){
    float price, totalCost;

    printf("Enter the price: ");
    scanf("%f", &price);

    totalCost = (price + price * 0.05);
    printf("The total price is: %0.2f", totalCost);

    return 0;
}
