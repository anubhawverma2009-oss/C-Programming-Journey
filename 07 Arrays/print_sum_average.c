// Print Sum and Average of Array Elements written by Anubhav Verma
#include <stdio.h>
int main(){
    int size,i,sum=0;
    float average;
    printf("-:Sum and Average of Array Elements:-");
    printf("\nEnter Size of Array: ");
    scanf("%d", &size);
    printf("Enter %d Values: ", size);
    printf("\n");
    int arr[size];
    for(i=0;i<size;i++){
        scanf("\n%d", &arr[i]);
    }
    for (i=0; i<size; i++){
        sum += arr[i];
    }
    printf("Sum: %d",sum);
    average = (float)sum/size;
    printf("\nAverage: %.2f", average);

    return 0;
}