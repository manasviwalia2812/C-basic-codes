//wap to reverse an array without an extra array
#include <stdio.h>
int reverse (int arr[]) {
    int i=0;
    int j=4;
    while (i<j) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    reverse(arr);
    for (int i=0;i<=4;i++) {
        printf ("%d ",arr[i]);
    }
    

    return 0;
}