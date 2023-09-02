#include<stdio.h>
//#define pi 3.1415

int main(void){
    const float pi = 3.1415;
    float d = 20;
    float r = d/2;

    float V = 1.333 * pi * r * r * r;

    printf("%f",V);

    return 0;
}
