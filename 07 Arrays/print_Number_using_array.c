// Print Numbers Using Array written by Anubhav Verma

#include <stdio.h>
int main(){
   int size;
   printf("Enter Size of Array: ");
   scanf("%d",&size);
   int arr[size],i;
   printf("Please Enter All Values of Array: ");
   for(i=0;i<size;i++){
     scanf("\n%d", &arr[i]);
     }
   printf("The Values of Array are: \n");
   for(i=0;i<size;i++){
      printf("%d\n", arr[i]);
     }

     return 0;
}