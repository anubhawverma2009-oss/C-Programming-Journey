// Print Numbers from 1 to N using Recursion written by Anubhav Verma

#include <stdio.h>
void printNumbers(int n);
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}
void printNumbers(int n){

    //base Case, Most Important
    if(n==0){
        return;
    }
    //call
    printNumbers(n-1);

    //kaam
    printf("%d\n",n);
}