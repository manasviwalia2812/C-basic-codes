//calculate sum of arrays 
#include<stdio.h>
void main ()
{
    int arr [5];
    int i;

    for (i=0;i<5;i++){
        printf("enter element ");
        scanf("%d",&arr[i]);
    }

 int sum=0; 
 for(i=0;i<5;i++) {
sum=sum+arr[i];
 }
    printf("%d",sum);


}