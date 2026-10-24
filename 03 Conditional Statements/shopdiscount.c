#include <stdio.h>
int main(){
   float amount;
   float discount;
  printf("Enter Your Amount: ");
  scanf("%.2f",&amount);

if (amount<=5000){
    printf("Discount: 0%%\nTry Next Time!!");
}
else if (amount<=7000){
    printf("\nDiscount: 5%%\nPlease Cleam Your Discount!!");
}
else if (amount<=9000){
    printf("\nDiscount: 10%%\nPlease Cleam Your Discount!!");
}
else {
    printf("\nDiscount: 20%%\nPlease Cleam Your Discount!!");
}
    return 0;
}