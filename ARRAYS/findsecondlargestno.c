//to find the maximum number in an array
#include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

    int max=arr[0];
    int secondmax=arr[0];
    for (int i=0;i<=4;i++) {
        if (max<arr[i]) {
            secondmax=max;
            max=arr[i];
        }
    }
    printf("%d",secondmax);

    return 0;
}