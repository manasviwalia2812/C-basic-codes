<<<<<<< HEAD
//to find the maximum number in an array
#include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

    int max=arr[0];
    for (int i=0;i<=4;i++) {
        if (max<arr[i]) {
            max=arr[i];
        }
    }
    printf("%d",max);

    return 0;
=======
//to find the maximum number in an array
#include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

    int max=arr[0];
    for (int i=0;i<=4;i++) {
        if (max<arr[i]) {
            max=arr[i];
        }
    }
    printf("%d",max);

    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}