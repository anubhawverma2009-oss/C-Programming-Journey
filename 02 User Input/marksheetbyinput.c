// Student Marksheet Using User Input written by Anubhav Verma
#include <stdio.h>

int main() {
    char name[50];
    printf("Enter student's name: ");
    scanf("%s", name);
    int maths, english, computer;
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for English: ");
    scanf("%d", &english);
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    int total = maths + english + computer;
    float percentage = total / 3.0;

    printf("====== STUDENT MARKSHEET ======\n");
    printf("Name: %s\n", name);
    printf("Maths      = %d\n", maths);
    printf("English    = %d\n", english);
    printf("Computer   = %d\n", computer);
    printf("-------------------------------\n");
    printf("Total      = %d / 300\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("===============================\n");

    return 0;
}