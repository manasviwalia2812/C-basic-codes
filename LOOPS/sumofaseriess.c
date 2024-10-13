<<<<<<< HEAD
//to find sum of series 1-2+3-4+5-6...upto n terms
// if n=6 (even)
// (1-2)+(3-4)+(5-6)=(-1)+(-1)+(-1)= 3*(-1)= -n/2
// if n=5 (odd)
// (1-2)+(3-4)+5= -n/2 +n
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int sum;
     {
        if (n%2==0) 
        sum=-n/2;
        
        else
        sum=(-n/2)+n;
    }
    printf("%d",sum);
  
    return 0;
}
=======
//to find sum of series 1-2+3-4+5-6...upto n terms
// if n=6 (even)
// (1-2)+(3-4)+(5-6)=(-1)+(-1)+(-1)= 3*(-1)= -n/2
// if n=5 (odd)
// (1-2)+(3-4)+5= -n/2 +n
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    
    int sum;
     {
        if (n%2==0) 
        sum=-n/2;
        
        else
        sum=(-n/2)+n;
    }
    printf("%d",sum);
  
    return 0;
}
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
