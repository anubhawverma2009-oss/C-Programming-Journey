#include <stdio.h>
//function declaration
int sum(int a, int b);
int main(){
printf("sum1 = %d\n",sum(1,2));
printf("sum2 = %d\n",sum(2,2));
printf("sum3 = %d\n",sum(101,4));
printf("sum4 = %d\n",sum(1,209));
printf("sum5 = %d\n",sum(189,01));
   return 0;
}

//function implemention
int sum(int a, int b){
   return a+b;
}