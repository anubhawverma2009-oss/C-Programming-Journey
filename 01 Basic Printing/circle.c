// Circle Calculator Program written by Anubhav Verma
#include <stdio.h>

int main() {
    float radius = 7;
    float pi = 3.14;
    printf("Radius = %.2f\n", radius);
    printf("Area = %.2f\n", pi * radius * radius);
    printf("Circumference = %.2f\n", 2 * pi * radius);

    return 0;
}