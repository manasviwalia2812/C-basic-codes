#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=n-1;j>=i;j--) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("%d",k);
        }


        printf("\n");
    }
    return 0;
} 