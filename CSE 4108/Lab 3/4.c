#include<stdio.h>

int main(void){
    int dec, n1, n2, n3, n4, n5;

    printf("Enter your number is decimal: ");
    scanf("%d", &dec);

    n1 = (dec / (8*8*8*8)) % 8;
    n2 = (dec / (8*8*8)) % 8;
    n3 = (dec / (8*8)) % 8;
    n4 = (dec / 8) % 8;
    n5 = dec % 8;

    printf("%d%d%d%d%d\n\n", n1, n2, n3, n4, n5);

    printf("%.5o", dec);

    return 0;
}

