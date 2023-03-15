#include<stdio.h>

int main()
{
    int n , i;
    printf("enter the number you want fibonacci upto:");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t" , fib[0]);
    printf("%d\t" , fib[1]);
    for ( i = 2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0 ;

}