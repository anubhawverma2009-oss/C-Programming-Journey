#include <stdio.h>

int main(){
int AR;
scanf("%d",&AR);
if(AR == 1)
   printf("Monday");
else if(AR == 2)
   printf("Tuesday");
else if(AR == 3)
   printf("Wednesday");
else if(AR == 4)
   printf("Thursday");
else if(AR == 5)
   printf("Friday");
else if(AR == 6)
   printf("Saturday");
else if(AR == 7)
   printf("Sunday");
else
    printf("Invalid day");

return 0;
}