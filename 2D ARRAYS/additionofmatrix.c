#include <stdio.h>
 int main ()
 {  //take input elements 
    int arr[3][3];
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("enter elements ");
            scanf("%d",&arr[i][j]);
        }
       
    }
//input matrix 2
int brr[3][3];
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("enter elements of matrix 2 ");
            scanf("%d",&brr[i][j]);
        }
       
    }
//print input elements
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    printf("\n");

//print matrix 2
for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("%d ",brr[i][j]);
        }
        printf ("\n");
    }
printf("\n");
//print sum
for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("%d ",brr[i][j]+arr[i][j]);
        }
        printf ("\n");
    }

    return 0;
 }