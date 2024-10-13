<<<<<<< HEAD
//count the number of elements greater than x
#include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
 int count=0;
 int x;
 printf ("enter number ");
scanf ("%d",&x);
for (int i=0;i<=4;i++) {
    if (arr[i]>x) {
        count=arr[i];
    }
}
printf ("%d",count);
return 0;
=======
//count the number of elements greater than x
#include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
 int count=0;
 int x;
 printf ("enter number ");
scanf ("%d",&x);
for (int i=0;i<=4;i++) {
    if (arr[i]>x) {
        count=arr[i];
    }
}
printf ("%d",count);
return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}