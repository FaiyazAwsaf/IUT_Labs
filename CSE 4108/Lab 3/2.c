#include<stdio.h>

int main(void){

    int n, n1 ,n2, n3, x, y;

    printf("Enter a three digit number: ");
    scanf("%d", &n);

    n1 = n % 10;
    x = n / 10;
    n2 = x % 10;
    y = x / 10;
    n3 = y % 10;

    printf("%d%d%d", n1, n2, n3);

    return 0;

}
