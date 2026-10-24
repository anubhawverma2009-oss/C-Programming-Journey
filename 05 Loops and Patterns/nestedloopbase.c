#include <stdio.h>
int main(){
int n=5;
//outerloop -- No. of Rows
for(int i=1;i<=n;i++){
  //Iner loop -- No. of Columns
    for(int j=1;j<=n;j++){
      printf("* ");
    }
    printf("\n");
}

return 0;
}
