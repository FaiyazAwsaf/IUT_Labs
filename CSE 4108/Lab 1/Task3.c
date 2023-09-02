#include<stdio.h>
#define pi 3.1415


int main(void){
    int r = 0;
    float Volume =0;

    printf("Enter the radius: ");

    scanf("%d", &r);

    float V = 1.333 * pi * r * r * r;

    printf("The Volume of sphere is %f", V);

    return 0;
}
