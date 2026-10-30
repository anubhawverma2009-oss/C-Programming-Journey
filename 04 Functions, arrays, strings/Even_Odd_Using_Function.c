// Check Whether a Number is Even or Odd Using Function written by Anubhav Verma
#include <stdio.h>
void EvenOdd(int num) {
    if(num % 2 == 0)
    printf("Given Number is EVEN!!");
else
   printf("Given Number is ODD!!");
}
    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    EvenOdd(num);
        return 0;
    }