//to print fibonacci series of nth number
// 1 1 2 3 5 8 13..
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int a=1,b=1,sum=0,i=3;            // a,b,a+b,a+2b+...
    
    while (i<=n) {
        sum=a+b;
        
        a=b;
        b=sum;
       i++;
    }
    printf("%d\n",sum);
    return 0;
}
