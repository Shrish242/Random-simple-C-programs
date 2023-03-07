#include<stdio.h>
int main()
{
    int n;
    do
    {
    printf("enter a number: " );
    scanf("%d", &n);
    printf("the number you entered is %d\n" ,n);

    if
        (n % 7 == 0){ 
        break;
    }
    } while (1);
    printf("thank you");
    
}