#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    printf("enter a string:");
    scanf("%s", &st);
    printf("\n revrse string \n ");
    strrev(st);
    printf("%s", st);
    getch();
}