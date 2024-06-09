/*change odd indexed array to its second multiple and even indexed to its increment by 10*/
#include <stdio.h>
int main ()
{
    int arr[10];
    printf ("enter elements");
    scanf("%d%d%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
     for (int i=0;i<10;i++) {
        if (i%2==0) {
            printf ("%d ",arr[i]+10);
        }
        else {
            printf ("%d ",arr[i]*2);
        }
     }
    return 0;
}