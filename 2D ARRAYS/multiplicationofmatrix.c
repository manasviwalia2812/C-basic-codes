#include <stdio.h>
 int main ()
 {  //take input elements 
 int m,n;
    printf("enter rows and columns of matrix 1 ");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            printf("enter elements ");
            scanf("%d",&arr[i][j]);
        }
       
    }
//input matrix 2
int p,q;
printf("enter rows and columns of matrix 2");
    scanf("%d%d",&p,&q);

    int brr[p][q];
    for (int i=0;i<p;i++) {
        for (int j=0;j<q;j++) {
            printf("enter elements of matrix 2 ");
            scanf("%d",&brr[i][j]);
        }
          }
//print input elements
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    printf("\n");

//print matrix 2
for (int i=0;i<p;i++) {
        for (int j=0;j<q;j++) {
            printf("%d ",brr[i][j]);
        }
        printf ("\n");
         }
         printf("\n");

//multiplication
int res[m][q];

for (int i=0;i<m;i++) {
    for (int j=0;j<q;j++) {
        res[i][j]=0;
        for (int k=0;k<n;k++) {
            res[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}
//print matrix multiplication
for (int i=0;i<m;i++) {
        for (int j=0;j<q;j++) {
            printf("%d ",res[i][j]);
        }
        printf ("\n");
}
return 0;
 }