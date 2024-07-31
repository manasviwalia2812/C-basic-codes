#include <stdio.h>
int factorial (int x)
{ int factorial=1;
    for (int i=1;i<=x;i++){
        factorial*=i;
    }
        return factorial;
}

int combination(int n,int r)
{
    int combination= factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}

int main ()
{
    int n;
    printf ("enter n ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        for (int k=n;k>=i;k--) {
            printf(" ");
        }
        for (int j=0;j<=i;j++)
        { int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;

} 
