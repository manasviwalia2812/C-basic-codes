#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for (int k=n;k>=i;k--) {
            printf(" ");
        }
        char c='A';
        for (int j=1;j<=i;j++) {
            printf ("%c ",c);
            c++;
        }
        printf("\n");
    }


}