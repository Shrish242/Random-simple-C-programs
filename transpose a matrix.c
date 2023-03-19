#include<stdio.h>
void main()
{
    int n[3][3], i , j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter the numbers");
            scanf("%d", &n[i][j]);

        }
        
    }
    printf("the mastrix is:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", n[i][j]);

        }
        printf("\n");
    }
    printf("the transpose of  matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", n[j][i]);

        }
        printf("\n");
    }
    

}