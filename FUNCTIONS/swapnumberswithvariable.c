#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter a ");
    scanf("%d",&a);

    printf("enter b ");
    scanf("%d",&b);

    int c;
    c=b;
    b=a;
    a=c;
    

    printf("numbers are %d and %d",a,b);
    return 0;
}