<<<<<<< HEAD
#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        
        if (i%2!=0) {
            for (int j=1;j<=i;j++) { 
                if (j%2!=0) {
                    printf("1 ");
                }
                else printf("0 ");
            }
            }
        
        else {
            for (int j=1;j<=i;j++) 
                {
                if (j%2!=0) {
                    printf("0 ");
                } 
                else printf ("1 ");
            }
            
        }
            printf ("\n");


    }
}
=======
#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        
        if (i%2!=0) {
            for (int j=1;j<=i;j++) { 
                if (j%2!=0) {
                    printf("1 ");
                }
                else printf("0 ");
            }
            }
        
        else {
            for (int j=1;j<=i;j++) 
                {
                if (j%2!=0) {
                    printf("0 ");
                } 
                else printf ("1 ");
            }
            
        }
            printf ("\n");


    }
}
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
