<<<<<<< HEAD
//to print reverse of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int rev=0,lastdigit;

   while (n>0)
  {
    lastdigit= n%10;   
    rev= rev*10;        
   rev= rev+lastdigit;    
    n= n/10;            
   
   }
   
   printf("reversed number is %d",rev);

    return 0;
} 
=======
//to print reverse of a given number
#include <stdio.h>

int main()
{ 
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    int rev=0,lastdigit;

   while (n>0)
  {
    lastdigit= n%10;   
    rev= rev*10;        
   rev= rev+lastdigit;    
    n= n/10;            
   
   }
   
   printf("reversed number is %d",rev);

    return 0;
} 
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
