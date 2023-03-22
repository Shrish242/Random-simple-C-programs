#include<stdio.h>
int main()
{
    int i , n ;
    for( i = 0 ; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("\nfizz %d \n", i);
        }
        else if (i % 5 == 0 )
        {
       printf("\nbuzz %d\n", i );
        }
        else if(i % 5 == 0 && i % 3 == 0)
        {
            printf("\nfixxbuxx\n");
        }
        else
        {
             printf("%d\n", i);
        }
    }
    return 0 ;
}