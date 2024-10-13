<<<<<<< HEAD
#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        char c='A';
        for (int j=1;j<=i;j++) {
            printf ("%c ",c);
            c++;
        }
        printf("\n");
    }


=======
#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        char c='A';
        for (int j=1;j<=i;j++) {
            printf ("%c ",c);
            c++;
        }
        printf("\n");
    }


>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}