/* Voting Eligibility Checker Using Conditional Statements 
written by Anubhav Verma*/

#include <stdio.h>
int main() {
    int age;
    char Name[50];
    printf("Enter Your Name: ");
    scanf("%s",Name);
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Hey, %s!! You are eligible to vote.",Name);
    } else {
        printf("Hey, %s!! You are not eligible to vote.",Name);
    }

    return 0;
}