<<<<<<< HEAD
//to find the sum of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int lastdigit;
    int sum=0;
    while (n>0) {
        lastdigit= n%10;
        sum=sum+lastdigit;
        n=n/10;
        
    }
    printf("%d",sum);

    return 0;
}
=======
//to find the sum of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int lastdigit;
    int sum=0;
    while (n>0) {
        lastdigit= n%10;
        sum=sum+lastdigit;
        n=n/10;
        
    }
    printf("%d",sum);

    return 0;
}
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
