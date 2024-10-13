<<<<<<< HEAD
#include <stdio.h>
void main ()
{
int n;
printf ("enter no. of rows ");
scanf ("%d",&n);
  if (n%2!=0){
 for (int i=1;i<=n;i++) { 
    for (int j=1;j<=n;j++) {
        if (i==j || i+j==n+1)
        {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf ("\n");
 }

}

else {
    printf ("inavlid input");
}
=======
#include <stdio.h>
void main ()
{
int n;
printf ("enter no. of rows ");
scanf ("%d",&n);
  if (n%2!=0){
 for (int i=1;i<=n;i++) { 
    for (int j=1;j<=n;j++) {
        if (i==j || i+j==n+1)
        {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf ("\n");
 }

}

else {
    printf ("inavlid input");
}
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}