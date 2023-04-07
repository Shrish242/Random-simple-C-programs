#include<stdio.h>
#include<conio.h>
#include<string.h>
void fun();
void main()
{
    fun();
    getch();
}
void fun(){
    int i , j , n;
    char a[20];
    puts("enter the word");
    gets(a);
    n = strlen(a);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
    
}