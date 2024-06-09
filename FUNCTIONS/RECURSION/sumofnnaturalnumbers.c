#include <stdio.h>
int sum(int n) {
    if (n!=0) 
        return n+ sum(n-1);
    else 
    return n;    
}
int main() {
    int n;
  printf("enter n: ");
  scanf("%d",&n);  
  int result=sum(n);
  printf("sum of %d natural numbers is %d",n,result);
  return 0;
}