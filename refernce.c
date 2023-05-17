#include<stdio.h>
#include<conio.h>
void swap(int * , int *);
int main()
{
    int a , b;
    a = 99 ; b = 89;
    printf("\nvalue before swap:%d\t%d\t ", a ,b);
    swap(&a , &b);
    printf("\nvalue afterr swap:%d\t%d\t", a , b);
    getch();
    return 0 ;
}
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nvalue in functio:%d\t%d\t", *x , *y);
}