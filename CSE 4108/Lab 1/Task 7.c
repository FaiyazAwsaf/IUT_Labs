#include <stdio.h>


int main(void){

    int amount, bill20, bill10, bill5, bill1, remaining10, remaining5, remaining1;

    printf("Enter your amount: ");
    scanf("%d", &amount);

    bill20 = amount / 20;
    remaining10 = amount % 20;

    bill10 = remaining10 / 10;
    remaining5 = remaining10 % 10;

    bill5 = remaining5 / 5;
    remaining1 = remaining5 % 5;

    bill1 = remaining1;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", bill20, bill10, bill5, bill1);

    return 0;
}
