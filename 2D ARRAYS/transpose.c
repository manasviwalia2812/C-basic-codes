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

for (int i=0;i<=2;i++) {
        for (int j=0;j<=i;j++) {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
}

//print input elements
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            printf("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
 }

