<<<<<<< HEAD
#include<stdio.h>
void reversesentence();
int main () {
    printf("enter a sentence ");
    reversesentence();
    return 0;   
}
void reversesentence() {
    char c;
    scanf("%c",&c);
    if (c!='\n') {
    reversesentence();
    printf("%c",c);
    }
=======
#include<stdio.h>
void reversesentence();
int main () {
    printf("enter a sentence ");
    reversesentence();
    return 0;   
}
void reversesentence() {
    char c;
    scanf("%c",&c);
    if (c!='\n') {
    reversesentence();
    printf("%c",c);
    }
>>>>>>> fc1aff75a7db55be4ade1dc2dcde141d51a595fa
}