<<<<<<< HEAD
#include <stdio.h>
#include<string.h>
int main ()
{
    char string[50];
    char ch;
    printf("enter string: ");
    fgets(string,sizeof(string),stdin);

    printf("enter character: ");
    scanf("%c",&ch);

    int count=0;
    for (int i=0; string[i]!='\0';i++) {
        if (string[i]==ch){
            count++;
        }
    }
    printf("%d",count);
    return 0;
=======
#include <stdio.h>
#include<string.h>
int main ()
{
    char string[50];
    char ch;
    printf("enter string: ");
    fgets(string,sizeof(string),stdin);

    printf("enter character: ");
    scanf("%c",&ch);

    int count=0;
    for (int i=0; string[i]!='\0';i++) {
        if (string[i]==ch){
            count++;
        }
    }
    printf("%d",count);
    return 0;
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}