<<<<<<< HEAD
#include <stdio.h>
int n1,n2;
//check if no. is prime
int checkprime(int n){
    if (n<=1){
        return 1;
    }
    else {
    for (int i=n-1;i>1;i--) {
        if (n%i==0) {
            return 1;
        }  
     }
    }
    
    return 0;
    
}
//print if no. is prime
int printprime() {
    for (int i=n1;i<=n2;i++) {
        int result=checkprime(i);
        if (result==0) {
            printf("%d\n",i);
        }
    }
}
//taking range as input
int main () {
    printf("enter the range: ");
    scanf("%d%d",&n1,&n2);
    //if n1>n2
    if (n1>n2) {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    int result=printprime();
    return 0;
}

=======
#include <stdio.h>
int n1,n2;
//check if no. is prime
int checkprime(int n){
    if (n<=1){
        return 1;
    }
    else {
    for (int i=n-1;i>1;i--) {
        if (n%i==0) {
            return 1;
        }  
     }
    }
    
    return 0;
    
}
//print if no. is prime
int printprime() {
    for (int i=n1;i<=n2;i++) {
        int result=checkprime(i);
        if (result==0) {
            printf("%d\n",i);
        }
    }
}
//taking range as input
int main () {
    printf("enter the range: ");
    scanf("%d%d",&n1,&n2);
    //if n1>n2
    if (n1>n2) {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    int result=printprime();
    return 0;
}

>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
