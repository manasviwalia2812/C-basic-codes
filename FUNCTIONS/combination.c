#include <stdio.h>
int factorial (int x)
{ int factorial=1;
    for (int i=1;i<=x;i++){
        factorial*=i;
    }
        return factorial;
}
int main ()
{
    int n,r;
    printf ("enter n and r ");
    scanf("%d%d",&n,&r);

    int answer;
    answer=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",answer);
    return 0;

} 
