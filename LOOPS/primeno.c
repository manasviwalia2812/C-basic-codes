//to check whether given no. is prime or not 
#include <stdio.h>

int main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);
    int a=0;
    for (int i=2;i<n;i++) { 
        if (n%i==0) 
        a=1;
        break;
        }
    {
    if ((n==1)&&(a==0))
    printf("neither prime nor composite");
    
    else if (a==0)
    printf("prime");
    
    else 
    printf ("composite");
    }
       
    return 0;
}
