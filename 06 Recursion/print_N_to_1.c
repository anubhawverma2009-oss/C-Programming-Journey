// Print Numbers from N to 1 using Recursion written by Anubhav Verma

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

    //kaam
    printf("%d\n",n);

    //call
    printNumbers(n-1);
}