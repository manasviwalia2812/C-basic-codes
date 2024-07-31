/* Given an array of integers, change the value of all 
odd indexed to its and all even indexed value by 10.*/
#include <stdio.h>
int main()
{
int arr[7];
printf("enter element ");
scanf ("%d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]);

for(int i=0;i<=6; i++) { 
    if(i%2!=0) arr[i]*=2; 
    else arr[i]+=10;

} 
for(int i=0;i<=6; i++) 
{ 
    printf("%d ",arr[i]);
}
return 0;
}