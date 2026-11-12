/* Mini Calculator Using Function 
written by Anubhav Verma*/
#include <stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);


int main(){
    int a,b,n;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Value For Opration\n+ : 1\n- : 2\n* : 3\n/ : 4\n%% : 5\n");
    printf("Please Enter One Value For Opration: ");
    scanf("%d",&n);
    if(n==1){
        printf("Sum of Two Numbers: %d\n",sum(a,b));
    }
    else if(n==2){
       printf("Difference between Two Numbers: %d\n",sub(a,b));
    }
    else if(n==3 ){
       printf("Product of Two Numbers: %d\n",mul(a,b));
    }
    else if(n==4){
       printf("Division of Two Numbers:%.2f\n", (float)div(a,b));
    }
    else if(n==5){
       printf("Remainder of Two Numbers:%d\n",mod(a,b));
    }
    else{
        printf("INVALID INPUT!!");
    }
    printf("\n");
    return 0;
}

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a*b;
}