#include<stdio.h>
#include<conio.h>
int main(){
    int n , arm=0 , rem = 0;
    printf("Enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = rem % 10;
        arm = rem * rem * rem + arm;
        n = n/10;
    }
    if (arm ==n)
    {
        printf("The number is armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;

}