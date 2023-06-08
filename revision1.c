#include<stdio.h>
#include<conio.h>
int fact( int);
int main(){
    int n , f;
    printf("enter the number");
    scanf("%d"  , &n);
    f = fact(n);
    printf("The favtorial = %d" , f);
    getch();
}
int fact(n){
    if (n == 1)
    {
        return 1;
    }
    else
    return n * fact(n-1);
}
