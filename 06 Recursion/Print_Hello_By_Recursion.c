#include <stdio.h>
void PrintHello(int n);//function Definetion
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    PrintHello(n);
    return 0;
}
void PrintHello(int n){

    //base Case, Most Important
    if(n==0){
        return;
    }

    //kaam
    printf("Hello Anubhav!!\n");

    //call
    PrintHello(n-1);
}