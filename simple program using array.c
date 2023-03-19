#include<stdio.h>

int main()
{
    int av , sum = 0 ;
    int i ;
    int marks[3];

    for ( i = 0; i < 3; i++)
    {
        printf("enter the marks:");
        scanf("%d", &marks[i]);

    }
    for ( i = 0; i < 3; i++)
    {
        sum = sum + marks[i];
    }
    av = sum / 3;
    printf("the average marks = %d", av);
 return 0;   
}