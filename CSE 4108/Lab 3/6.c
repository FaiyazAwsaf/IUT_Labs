#include<stdio.h>

int main(){

    int a, b, na, nb;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    na = b;
    nb = a;

    printf("The first number is: %d\nThe second number is: %d", na, nb);

    return 0;
}
