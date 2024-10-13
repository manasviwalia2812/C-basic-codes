<<<<<<< HEAD
#include <stdio.h>
void main ()
{
    int n;
    int a=1;
    printf("enter no. of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=1; j<=i;j++) {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
=======
#include <stdio.h>
void main ()
{
    int n;
    int a=1;
    printf("enter no. of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=1; j<=i;j++) {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}