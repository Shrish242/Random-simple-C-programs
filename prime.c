#include<stdio.h>
int main()
{
    int n , i, count;
    printf("enter a number:");
    scanf("%d" ,&n);
    for (i = 2 ; i <= n ; i++){
        if (n % i == 0){ 
            printf("%d isnot prime number" ,n);}
        else
        { 
        printf("%d is prime number" ,n);}
        return 0;
    }
}