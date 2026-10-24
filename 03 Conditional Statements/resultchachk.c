#include <stdio.h>
#include <math.h>
 int main(){
     float Marks;
     printf("Enter Your Marks: ");
     scanf("%f",&Marks);
if(Marks<33 && Marks>=0){
     printf("Result:FAIL\n");
     printf("GRADE:'D'\n");
     printf("Try again!!\n");
}
else if(Marks>=33 && Marks<=50){
     printf("Result:PASS\n");
     printf("GRADE:'C'\n");
     printf("Good\n");
}
else if(Marks>50 && Marks<=70){
     printf("Result:PASS\n");
     printf("GRADE:'B'\n");
     printf("Super\n");
}
else if(Marks>70 && Marks<100){
     printf("Result:PASS\n");
     printf("GRADE:'A'\n");
     printf("Excellent\n");
}
else if(Marks==100){
     printf("Result:PASS\n");
     printf("GRADE:'A+'\n");
     printf("Outstanding Performance!\n");
}
else{
     printf("INVALID MARKS!!");
}
     return 0;
}