#include<stdio.h>
int main ()
{
    char w;
    printf("enter the word:");
    scanf("%c",& w);
    switch(w){
        case'a':
        case'A':
        case'e':
        case'i':
        case'o':
        case'u':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("the word '%c' is vowel" ,w);
        break;
        default:
        printf("the word '%c' is either consonant or illegal",w );
    }
    return 0;
}