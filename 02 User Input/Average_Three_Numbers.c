// Average of Three Numbers Using User Input written by Anubhav Verma
#include <stdio.h>
int main() {
    int a,b,c,Average;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);

    Average = (a + b + c) / 3;

    printf("The average of the three numbers is: %d", Average);

    return 0;
}