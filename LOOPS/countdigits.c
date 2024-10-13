<<<<<<< HEAD
//to count the digits of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }
    printf("%d",count);

    return 0;
}
=======
//to count the digits of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }
    printf("%d",count);

    return 0;
}
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
