// Find the Maximum and Minimum Among Three Numbers Using Function written by Anubhav Verma
#include <stdio.h>
void max_min();
int main(){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Threed Number: ");
    scanf("%d",&c);
    max_min(a,b,c);
    return 0;
}
void max_min(int a,int b,int c){
    int max,min;
    max=a;
    min=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
printf("Maximun Number Is %d.",max);
printf("\nMinimum Number Is %d.",min);
}
