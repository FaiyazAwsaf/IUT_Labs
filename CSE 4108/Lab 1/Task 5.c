#include<stdio.h>


int main(void){

   float x, solution;

   printf("Enter a value for X: ");
   scanf("%f", &x);

   solution = (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6);

   printf("The answer is: %f", solution);

   return 0;
}
