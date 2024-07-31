//number of pairs of  elements whose sum is x
#include<stdio.h>
void main ()
{
int arr[5];
int x;
printf(" enter elements: ");
scanf ("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
 printf ("enter number ");
 scanf("%d",&x);
int count=0;
for (int i=0;i<=4;i++) {
    for (int j=0;j<=i;j++) {
        if (arr[i]+arr[j]==x) 
        printf("(%d,%d), ",arr[i],arr[j]);
    }
}

}