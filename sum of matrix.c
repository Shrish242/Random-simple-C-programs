#include<stdio.h>
int main()
{
    int n[3][3], b[3][3] , c[3][3] ,  i , j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter the numbers");
            scanf("%d", &n[i][j]);

        }
        
    }
          for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter the numbers");
            scanf("%d", &b[i][j]);

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
         printf("the mastrix is:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);

        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            c[i][j] = n[i][j] + b[i][j];
        }
    }
    printf("sum of matrix:\n");
    for(i= 0; i<3 ; i++)
    {
        for(j= 0 ; j < 3 ; j++)
        {
            printf("%d\n", c[i][j]);
        }
    }
    return 0 ;
    
}
