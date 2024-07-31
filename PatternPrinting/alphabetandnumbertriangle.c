#include <stdio.h>
void main ()
{
        int n;
    printf("enter number of rows ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        int a=1;
        char c='A';
       if (i%2!=0) {
        for (int j=1;j<=i;j++) {
            printf("%d ",a);
            a++;
        }
        printf("\n");
       }
        else { 
            for (int k=1;k<=i;k++) {
                printf("%c ",c);
                c++;
            }
            printf("\n");
        }

       }

    }
