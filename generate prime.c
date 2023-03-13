#include<stdio.h>

int main()
{
int n , i , count = 0;

for (n= 100 ; n>=1 ; n--)
{
    count = 0;
    for (i = 1 ; i<= n; i++)
    {
        if (n % i == 0)
        {
            count ++;
        }
    }
    if (count == 2){
        printf("%d\t", n);
    }
}
return 0;
}