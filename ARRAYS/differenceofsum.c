 //difference to sum at even indices to sum at odd indices 
 #include <stdio.h>
int main ()
{
    int arr[5];
    printf ("enter elements ");
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

    int sumeven=0,sumodd=0;

    for (int i=0;i<=4;i++) {
        if (i%2==0){
            sumeven+=arr[i];
        }
        else {
            sumodd+=arr[i];
        }
        
    }
    printf("%d",sumeven-sumodd);
    return 0;
}