<<<<<<< HEAD
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    int nst=1;      //nst=no. of stars

    for (int i=1;i<=n;i++) {    //for spaces
        for (int k=n;k>=i;k--) {
            printf(" ");
        }
        for (int j=1;j<=nst;j++) {   //for stars
            printf("%d",j);
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
=======
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    int nst=1;      //nst=no. of stars

    for (int i=1;i<=n;i++) {    //for spaces
        for (int k=n;k>=i;k--) {
            printf(" ");
        }
        for (int j=1;j<=nst;j++) {   //for stars
            printf("%d",j);
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
} 