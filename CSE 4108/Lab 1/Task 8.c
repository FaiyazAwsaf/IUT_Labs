#include <stdio.h>

int main(void){

    float loan, rate, payment;
    float debt, ratePerMonth, firstMonth, secondMonth, thirdMonth;


    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    ratePerMonth = ((rate/100)/12);
    debt = loan + loan * ratePerMonth;

    firstMonth = debt - payment;
    secondMonth = firstMonth - payment + (firstMonth * ratePerMonth);
    thirdMonth = secondMonth - payment + (secondMonth * ratePerMonth);



    printf("Balance remaining after first payment: %.2f\n", firstMonth);
    printf("Balance remaining after second payment: %.2f\n", secondMonth);
    printf("Balance remaining after third payment: %.2f\n", thirdMonth);

    return 0;
}
