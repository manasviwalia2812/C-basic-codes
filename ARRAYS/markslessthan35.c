<<<<<<< HEAD
//given array of marks of 10 students,
// if the mark ofany sttudent is less than 35 
//print its roll no., ie, the index of that array
#include<stdio.h>
void main ()
{
    int marks[10]; 
    int i;
    for (i=0;i<=9;i++) {
    printf (" enter marks: \n");
    scanf("%d",&marks[i]);
    }
     for (i=0;i<=9;i++) {
    if (marks[i]<35) {
        printf("\n%d\n",i);
    }
    
    }


=======
//given array of marks of 10 students,
// if the mark ofany sttudent is less than 35 
//print its roll no., ie, the index of that array
#include<stdio.h>
void main ()
{
    int marks[10]; 
    int i;
    for (i=0;i<=9;i++) {
    printf (" enter marks: \n");
    scanf("%d",&marks[i]);
    }
     for (i=0;i<=9;i++) {
    if (marks[i]<35) {
        printf("\n%d\n",i);
    }
    
    }


>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}