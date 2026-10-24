// Student Marksheet Program written by Anubhav Verma
#include <stdio.h>

int main() {
    int maths = 85, english = 78, computer = 92;
    int total = maths + english + computer;
    float percentage = total / 3.0;

    printf("====== STUDENT MARKSHEET ======\n");
    printf("Maths      = %d\n", maths);
    printf("English    = %d\n", english);
    printf("Computer   = %d\n", computer);
    printf("-------------------------------\n");
    printf("Total      = %d / 300\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("===============================\n");

    return 0;
}