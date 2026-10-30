// Find the Greater of Two Numbers Using Function written by Anubhav Verma
#include <stdio.h>
void great(int a, int b);
 int main(){
    int a,b;
    printf("This Program is to Find the Greater of Two Numbers!!\n");   
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    great(a,b);
    return 0;
 }
void great(int a, int b){
    if(b<a){
        printf(" The Greater Number is: %d",a);
    }
    else if(a == b){
        printf(" %d and %d are Equal!!", a, b);
    }
    else{
        printf(" The Greater Number is: %d",b);
    }
}