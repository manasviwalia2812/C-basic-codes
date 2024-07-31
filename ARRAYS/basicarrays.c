#include<stdio.h>
void main ()
{
    int arr[5];

    for (int i=0;i<=4;i++)
    {
        printf("enter element %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("\n%d",arr[3]);
}