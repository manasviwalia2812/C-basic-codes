#include <stdio.h>
#include <string.h>
int main ()
{
    typedef struct cricketer {
        char name [15];
        int runs;
        float average;

    }cricketer;

    cricketer arr[3];

    for (int i=0;i<=2;i++) {
        printf("enter name ");
        scanf (" %[^\n]",&arr[i].name);
        printf("enter runs ");
        scanf("%d",&arr[i].runs);
        printf("enter average ");
        scanf("%f",&arr[i].average);

    }

    for (int i=0;i<=2;i++) {
        puts(arr[i].name);
        printf("%d",arr[i].runs);
        printf("%f",arr[i].average);
    }
    return 0;
}