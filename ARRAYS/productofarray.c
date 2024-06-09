//calculate product of element of an array 
#include<stdio.h>
void main ()
{
    int arr [5];
    int i;

    for (i=0;i<5;i++){
        printf("enter element ");
        scanf("%d",&arr[i]);
    }

 int product=1; 
 for(i=0;i<5;i++) {
product=product*arr[i];
 }
    printf("%d",product);


}