<<<<<<< HEAD
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n+1-i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
} 
=======
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n+1-i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
} 
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
//i+j=n+1 -> j=n+1-i