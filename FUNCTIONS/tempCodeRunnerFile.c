<<<<<<< HEAD
#include <stdio.h> 
#include <math.h>
int n1,n2;
//to determine order 
int countdigits(int n)
{
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }

    return count;
}

//to check for armstrong number
int checkarmstrongnumber (int n){
    float result=0.0;
    int originaln=n;
int order=countdigits(n);

 while (n>0) {
       int lastdigit=n%10;
result+=pow(lastdigit,order);
n=n/10;
}
int resultt=(int)result;

if (resultt!=originaln) {
    return 1;
}
return 0;
}

//to print armstrong numbers
int printarmstrongnumber(){
for (int i=n1;i<=n2;i++) {
 int temp=checkarmstrongnumber(i);
 if (temp==0) {
    printf("%d\n",i);
 }
}
}

//to input range
int main () {
    printf("enter the range: ");
    scanf("%d%d",&n1,&n2);
    //if n1>n2
    if (n1>n2) {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    printarmstrongnumber();
    return 0;

}

=======
#include <stdio.h> 
#include <math.h>
int n1,n2;
//to determine order 
int countdigits(int n)
{
    int count=0;
    while (n>0) {
        n=n/10;
        count++;
    }

    return count;
}

//to check for armstrong number
int checkarmstrongnumber (int n){
    float result=0.0;
    int originaln=n;
int order=countdigits(n);

 while (n>0) {
       int lastdigit=n%10;
result+=pow(lastdigit,order);
n=n/10;
}
int resultt=(int)result;

if (resultt!=originaln) {
    return 1;
}
return 0;
}

//to print armstrong numbers
int printarmstrongnumber(){
for (int i=n1;i<=n2;i++) {
 int temp=checkarmstrongnumber(i);
 if (temp==0) {
    printf("%d\n",i);
 }
}
}

//to input range
int main () {
    printf("enter the range: ");
    scanf("%d%d",&n1,&n2);
    //if n1>n2
    if (n1>n2) {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    printarmstrongnumber();
    return 0;

}

>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
