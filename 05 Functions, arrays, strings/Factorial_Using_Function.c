// Find Factorial of a NumbermUsing Function written by Anubhav Verma
#include <stdio.h>
int fact();
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    fact(n);
    return 0;
}
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
     fact *=i;
}
    printf("Factorial Of A Number: %d",fact);
}