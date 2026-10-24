// Multiplication Table Using While Loop written by Anubhav Verma
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10) {
        printf("%d\n", n * i);
        i++;
    }

    return 0;
}