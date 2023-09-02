#include<stdio.h>

int main(){

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The first number is: %d\nThe second number is: %d", a, b);

    return 0;
}

