// Display Multiplication Table of a Given Number Using Function written by Anubhav Verma
#include <stdio.h>
void table(int);
int main(){
int n;
printf("Enter a Value: ");
scanf("%d",&n);
table(n);
return 0;
}
void table(int n){
   int i;
    for(i=1; i<=10;i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
