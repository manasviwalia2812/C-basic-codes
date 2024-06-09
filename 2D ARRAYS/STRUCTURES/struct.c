#include <stdio.h>
int main ()
{
    struct pokemon {
    int hp;
    int speed;
    char tier;
    char name;
    };
    
    struct pokemon pikachu;
    printf("enter speed of pikachu");
    scanf("%d",&pikachu.speed);
     printf("enter speed %d of pikachu",pikachu.speed);
    return 0;
}