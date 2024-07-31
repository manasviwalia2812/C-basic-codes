#include <stdio.h>
void swap(int* a,int* b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
 int main ()
 {   int a,b;
    printf("enter a ");
    scanf("%d",&a);

    printf("enter b ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("swapped numbers are %d and %d",a,b);

    return 0;


 }