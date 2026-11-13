// Printingusing using do-while loop written by Anubhav Verma
#include <stdio.h>
int main() {
    char ch;
    do {
            printf("Hello! Welcome to world of C Programming\n");
            printf("Do you want to repeat? (y/n): ");
            scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}