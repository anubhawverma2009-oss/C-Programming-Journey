/* Take two numbers as input and print their sum, difference, product, and quotient.
Mini Calculator Using User Input written by Anubhav Verma */
#include <stdio.h>
int main(){
    int a,b;
printf("Enter first value: ");
scanf("%i",&a);
printf("Enter Second value: ");
scanf("%i",&b);
printf("Sum of Two Numbers: %i\n",a+b);
printf("Difference between Two Numbers: %i\n",a-b);
printf("Product of Two Numbers: %i\n",a*b);
printf("Division of Two Numbers:%.2f\n", (float)a/b);
printf("Remainder of Two Numbers:%i\n",a%b);


    return 0;
}