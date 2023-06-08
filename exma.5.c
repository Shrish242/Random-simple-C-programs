//write a program that uses a "while" loop to compute and prints the sum of a given numbers of squares.
// For Examples, if 4 is input, then the program will print 30, which is equal to 1^2+2^2+3^2+4^2

#include<stdio.h>
#include<conio.h>

int main(){
    int n , i = 1 , sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i*i;
        i++;
    }
    printf("The sum of the squares of the given number is: %d", sum);
    return 0;
    
}