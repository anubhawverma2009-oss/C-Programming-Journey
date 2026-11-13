// Print All Factors of a Number using Loops written by Anubhav Verma

#include <stdio.h>

int main() {
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}