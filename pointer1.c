#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int *ptr;
    n = 50 ;
    ptr = &n;
    printf("value of ptr = %u\n", ptr );
    printf("value = %d", *ptr);
    getch();
    
}