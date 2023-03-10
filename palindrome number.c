#include<stdio.h>

int main()
{
    int n, rem, rev = 0, ori;
    printf("Enter a number: ");
    scanf("%d", &n);
    ori = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (ori == rev)
    {
        printf("%d is a palindrome number.\n", ori);
    }
    else
    {
        printf("%d is not a palindrome number.\n", ori);
    }
    return 0;
}
