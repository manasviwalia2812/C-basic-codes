#include <stdio.h>
int main ()
{
    char line[100];
    int vowel,consonant,digit,whitespace;
    vowel=consonant=digit=whitespace=0;

    printf("enter string: ");
    fgets(line,sizeof(line),stdin);

    //reading each character of the line 
    for (int i=0;line[i]!='\0';i++){
        if (line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u') {
            vowel++;
        }
        else if (line[i]>='a'&& line[i]<='z') {
            consonant++;
        }
        else if (line[i]>='0' && line[i]<='9') {
            digit++;
        }
        else if (line[i]==' ') {
            whitespace++;
        }
    }
    
    printf("vowel=%d\nconsonant=%d\ndigits=%d\nwhitespace=%d",vowel,consonant,digit,whitespace);
    return 0;

}