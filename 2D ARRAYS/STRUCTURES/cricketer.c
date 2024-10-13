<<<<<<< HEAD
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
        printf("%d\n",arr[i].runs);
        printf("%f\n",arr[i].average);
    printf("\n");
    }
    
    return 0;
=======
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
        printf("%d\n",arr[i].runs);
        printf("%f\n",arr[i].average);
    printf("\n");
    }
    
    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}