<<<<<<< HEAD
#include <stdio.h>
void main ()
{
    int n;
    printf("enter no. of rows ");
    scanf ("%d",&n);
 
    if (n%2!=0) {
    for (int i=1;i<=n;i++) {
        if (i==(n/2)+1) {
            for (int j=1;j<=n;j++) {
                printf("*");
            }
        }
        else {
            for (int j=1;j<=n;j++) {
                if (j==(n/2)+1) {
                    printf("* ");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    }

    else {
        printf("invalid input");
    }
=======
#include <stdio.h>
void main ()
{
    int n;
    printf("enter no. of rows ");
    scanf ("%d",&n);
 
    if (n%2!=0) {
    for (int i=1;i<=n;i++) {
        if (i==(n/2)+1) {
            for (int j=1;j<=n;j++) {
                printf("*");
            }
        }
        else {
            for (int j=1;j<=n;j++) {
                if (j==(n/2)+1) {
                    printf("* ");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    }

    else {
        printf("invalid input");
    }
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}