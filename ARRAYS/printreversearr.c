//print reverse of an array
#include<stdio.h>
void main ()
{
    int arr[5];

    for (int i=0;i<=4;i++)
    {
        printf("enter element %d\n",i);
        scanf("%d",&arr[i]);
    }
    for (int j=4;j>=0;j--) {
        printf(" %d",arr[j]);
    }
}