#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        char c='A';
        for (int j=1;j<=n;j++) {
            printf ("%c ",c);
            c++;
        }
        printf("\n");
    }


}