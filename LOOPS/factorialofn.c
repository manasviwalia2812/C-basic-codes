//to find factorial of n
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int fac=1;
   for (int i=1;i<=n;i++)
    fac=fac*i;
    printf("%d",fac);
   
   return 0;
}
