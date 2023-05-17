#include<stdio.h>
#include<conio.h>
void swap(int , int);
int main()
{
    int a , b;
    a = 99;
    b = 89;
    printf("Value before swap:%d\t%d", a , b);
    swap(a , b);
    printf("value after swap:%d\t%d", a , b);
    getch();
    return 0;
}
void swap(int x , int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("value in function:%d\t %d", x , y);
}