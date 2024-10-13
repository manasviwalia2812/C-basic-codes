<<<<<<< HEAD
//to print first n Fibonacci numbers
// 1 1 2 3 5 8 13..
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int a=1,b=1,sum=0,i=3;            // a,b,a+b,a+2b+...
    printf("%d\n%d\n",a,b);
    while (i<=n) {
        sum=a+b;                //
        printf("%d\n",sum);
        a=b;
        b=sum;
       i++;
    }                             
   return 0;
=======
//to print first n Fibonacci numbers
// 1 1 2 3 5 8 13..
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int a=1,b=1,sum=0,i=3;            // a,b,a+b,a+2b+...
    printf("%d\n%d\n",a,b);
    while (i<=n) {
        sum=a+b;                //
        printf("%d\n",sum);
        a=b;
        b=sum;
       i++;
    }                             
   return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}