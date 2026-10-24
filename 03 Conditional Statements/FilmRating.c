#include <stdio.h>
int main(){
    char MovieName[50];
    double MovieRate = 0.0;
    char MovieStatus;
  printf("Enter Movie Name: ");
  scanf("%s",MovieName);
  printf("Enter Rating (0.0 to 5.0):");
  scanf("%lf",&MovieRate);
if (MovieRate>=0.0 && MovieRate<=2.0){
    printf("FLOP MOVIE!!");
}
else if (MovieRate>2.00 && MovieRate<=3.4){
    printf("SAMI-HIT MOVIE!!");
}
else if (MovieRate>=3.5 && MovieRate<=4.5){
    printf("HIT MOVIE!!");
}
else if (MovieRate>=4.6 && MovieRate<=5.0){
    printf("SUPER HIT MOVIE!!");
}
else{
printf("Wrong Input!!\n Please Try Again!!\n");
}
    return 0;
}