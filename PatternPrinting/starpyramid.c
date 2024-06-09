#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    int nst=1;      //nst=no. of stars

    for (int i=1;i<=n;i++) {
        for (int k=n;k>=i;k--) {
            printf(" ");
        }
        for (int j=1;j<=nst;j++) {
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
} 