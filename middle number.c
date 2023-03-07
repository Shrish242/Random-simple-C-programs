#include<stdio.h>
void main()
{
    int n1 , n2 , n3;
    printf("Enter first number:");
    scanf("%d" , &n1);
    printf("Enter second number:");
    scanf("%d" , &n2);
    printf("Enter first number:");
    scanf("%d" , &n3);
    if (n1>n2 && n3>n1 || n1<n2 && n1>n3){
        printf("%d is middle number", n1);
    }
    else if (n2>n1 && n3>n2 || n2<n1 && n2>n3){
        printf("%d is middle number", n2);
    }
    else
    printf("%d is middle number" , n3);
}