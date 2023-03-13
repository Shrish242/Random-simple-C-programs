#include<stdio.h>
#include<math.h>

int main()
{
    int n, rem, rev, ori;
    printf("Enter a number: ");
    scanf("%d", &n);
    ori = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rem * rem * rem + rev;
        n = n / 10;
    }
    if (ori == rev)
    {
        printf("%d is a armstrong number.\n", ori);
    }
    else
    {
        printf("%d is not a armstrong number.\n", ori);
    }
    return 0;
}