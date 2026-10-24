// Discount Calculator Using Conditional Statements written by Anubhav Verma
#include <stdio.h>

int main() {
    float amount;

    printf("Enter Your Amount: ");
    scanf("%f", &amount);

    if (amount <= 5000) {
        printf("Discount: 0%%\nTry Next Time!!");
    }
    else if (amount <= 7000) {
        printf("Discount: 5%%\nPlease Claim Your Discount!!");
    }
    else if (amount <= 9000) {
        printf("Discount: 10%%\nPlease Claim Your Discount!!");
    }
    else {
        printf("Discount: 20%%\nPlease Claim Your Discount!!");
    }

    return 0;
}
