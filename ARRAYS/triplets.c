/* find difference of the odd indexes elements to th even indexes elements*/
#include <stdio.h>
int main()
{
int arr[8];
int totalpairs=0;
int x;
printf("enter element ");
scanf ("%d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7]);
printf("enter value of x ");
scanf ("%d",&x);

for(int i=0;i<=7; i++) { 
    for (int j=i+1;j<=7;j++) {
        for (int k=j+1;k<=7;k++) {
            if (arr[i]+arr[j]+arr[k]==x) {
        totalpairs++;
        printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }
    }

    }
}
     printf("%d",totalpairs);
     
return 0;
}