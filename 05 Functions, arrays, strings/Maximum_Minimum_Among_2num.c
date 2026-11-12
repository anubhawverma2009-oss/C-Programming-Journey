// Find the Maximum and Minimum Among Two Numbers Using Function written by Anubhav Verma
#include <stdio.h>
int max_min2(int a, int b);
int main(){
    int a,b;
    printf("Enter First Value: ");
    scanf("%d",&a);
    printf("Enter Second Value: ");
    scanf("%d",&b);
    max_min2(a,b);
    return 0;
}
int max_min2(int a, int b){
if(a>b){
    printf("Maximun Value is %d & Minimum Value is %d.",a,b);
}
else if(a==b){
    printf("%d & %d are Equal!!",a,b);
}
else{
    printf("Maximun Value is %d & Minimum Value is %d.",b,a);
}
}