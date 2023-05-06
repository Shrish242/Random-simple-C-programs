#include<stdio.h>
#include<conio.h>
int recur( int);
 void main()
 {
    int n , f;
    printf("enter the number for factorial:");
    scanf("%d", &n);
    f = recur(n);
    printf("the factorial of %d = %d", n , f);
    getch();
 }
 int recur( int n)
 {
    if ( n == 1)
    {
        return (1);
    }
    else
    return n * recur(n-1);   
 }