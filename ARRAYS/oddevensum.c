/* find difference of the odd indexes elements to th even indexes elements*/
#include <stdio.h>
int main()
{
int arr[7];
int sumo=0,sume=0;
printf("enter element ");
scanf ("%d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]);

for(int i=0;i<=6; i++) { 
    if(i%2!=0) sumo+=arr[i]; 
    else sume+=arr[i];

} 
printf("%d",sumo-sume);
return 0;
}