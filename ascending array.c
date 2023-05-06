#include<stdio.h>
#include<conio.h>
int main()
{
    int n[10], i , j , temp;
    for ( i = 0; i < 10; i++)
    {
    printf("enter the number:");
    scanf("%d", &n[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = i + 1; j < 10; j++)
        {
            if (n[i]>n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
            
        }
        
    }
    printf("the asecnding number is:");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", n[i]);
    }
    return 0 ;    
}