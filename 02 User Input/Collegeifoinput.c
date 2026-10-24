// Student Details Using User Input Program written by Anubhav Verma
#include <stdio.h> 
int main(){
char Name[50],College[100];
int age;
printf("Enter Your Name: ");
  scanf("%s",Name);
printf("Enter Your Age: ");
  scanf("%d",&age);
printf("Enter Your College Name: ");
  scanf("%s",College);
printf("Hello %s!!\n",Name);
printf("Your are %d year old,",age);
printf("Your College Name is %s.",College);

    return 0;
}