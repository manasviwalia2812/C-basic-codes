#include <stdio.h> 
#include <math.h>
int countdigits(int n)
{
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }

    return count;
}
int main (){
    int n;
    float result=0.0;
    printf("enter number: ");
    scanf("%d",&n);
    int originaln=n;
int order=countdigits(n);

 while (n>0) {
       int lastdigit=n%10;
result+=pow(lastdigit,order);
n=n/10;
}

if ((int)result==originaln) {
    printf("%d is an armstrong number",originaln);
}

else if ((int)result!=originaln) {
     printf("not an armstrong number");
}

return 0;
}

