#include<stdio.h>
int main()
{
    int n , i , ln;
    printf("enter number:");
    scanf("%d", &n);
    ln = n;
    for ( i = 1; i < 10 ; i++)
    {
        printf("enter next number:");
        scanf("%d", &n);
        if (n>ln)
        ln = n;
    }
    printf("the largest number is = %d", ln);
    return 0;
    
}