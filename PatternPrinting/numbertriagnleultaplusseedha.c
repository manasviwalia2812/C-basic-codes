<<<<<<< HEAD
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=n-1;j>=i;j--) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("%d",k);
        }


        printf("\n");
    }
    return 0;
=======
#include <stdio.h>
int main ()
{ int n;
    printf("enter no. of lines ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        for (int j=n-1;j>=i;j--) {
            printf(" ");
        }
        for (int k=1;k<=i;k++) {
            printf("%d",k);
        }


        printf("\n");
    }
    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
} 