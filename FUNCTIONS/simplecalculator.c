#include <stdio.h>
 int add(int a, int b)
 {
    return a+b;
 } 

 int multiply (int a,int b) {
   return a*b;
 }

 int subtract(int a, int b)
 {
    return a-b;
 } 

 int divide (int a,int b) {
   return a/b;
 }


 int main () {
    int a,b;
    char func;
printf("enter a and b ");
scanf ("%d%d",&a,&b);

printf ("enter function(+,-,/,*): ");
scanf (" %c",&func);
 

 switch (func)
{
 case '+':
 {
   printf("sum is %d.",add(a,b));
   break;
 }
 case '-':
 {
   printf("diff is %d.",subtract(a,b));
 break;
 }
case '*':
 {
   printf("ans is %d.",multiply(a,b));
   break;
 }
 case '/':
 {
   printf("quotient is %d.",divide(a,b));
 break;
 }

 
}

 return 0;
 }