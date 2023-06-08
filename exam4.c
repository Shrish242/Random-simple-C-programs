// Write a C code to check if user given input is exactly divisible by 5 or 11 using nested if else statements?
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n%5 == 0)
    {
        if (n%11 == 0)
        {
            printf("The number is divisible by 5 and 11");
        }
        else{
            printf("The number is divisible by 5 but not by 11");
        }
    }
    else{
        printf("The number is not divisible by 5 and 11");
    }
    return 0;
    
}