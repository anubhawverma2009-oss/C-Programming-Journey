// Student Marks, Result and Grade Calculator Using Conditional Statements written by Anubhav Verma
#include <stdio.h>
 int main(){
     float Marks;
     char Name[50];
     printf("Enter Your Name: ");
     scanf("%s",Name);
     printf("Enter Your Marks: ");
     scanf("%f",&Marks);
     printf("-----------------------------\n");
     printf("-----------------------------\n");
     printf("-:Your Result:-\n");
     printf("Student's Name: %s\n",Name);
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

printf("---------ThankYou------------\n");
printf("-----------------------------");
     return 0;
}