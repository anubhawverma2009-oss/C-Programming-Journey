// Electricity Bill Program written by Anubhav Verma
#include <stdio.h>

int main() {
    int units = 150;
    float rate = 6.5;
    float bill = units * rate;

    printf("====== ELECTRICITY BILL ======\n");
    printf("Units Consumed : %d\n", units);
    printf("Rate per Unit  : Rs. %.2f\n", rate);
    printf("Total Bill     : Rs. %.2f\n", bill);
    printf("==============================\n");

    return 0;
}