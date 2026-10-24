// Simple Interest Program written by Anubhav Verma
#include <stdio.h>

int main() {
    float principal = 5000;
    float rate = 5;
    float time = 2;

    printf("Principal = %.2f\n", principal);
    printf("Rate = %.2f%%\n", rate);
    printf("Time = %.2f years\n", time);
    printf("Simple Interest = %.2f\n",
           (principal * rate * time) / 100);

    return 0;
}