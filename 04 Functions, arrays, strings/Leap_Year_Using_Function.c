// Check Whether a Given Year is a Leap Year Using Function written by Anubhav Verma
#include <stdio.h>
void LeapYear(int year);
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    LeapYear(year);
    return 0;
}
void LeapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a Leap Year\n", year);
    }
    else{
        printf("%d is Not a Leap Year\n", year);
    }
}