<<<<<<< HEAD
#include <stdio.h>
int factorial(int n) {
    if (n>=1) {
        if (n!=1) {
            return n*factorial(n-1);
        }
        else 
        return n;
    }
    else printf("not defined");
}
int main (){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int result=factorial(n);
    printf("the factorial of %d is %d",n,result);
    return 0;
=======
#include <stdio.h>
int factorial(int n) {
    if (n>=1) {
        if (n!=1) {
            return n*factorial(n-1);
        }
        else 
        return n;
    }
    else printf("not defined");
}
int main (){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int result=factorial(n);
    printf("the factorial of %d is %d",n,result);
    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}