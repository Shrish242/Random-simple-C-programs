#include <stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        printf("%d\n ", i);
    }
    printf("\n%d is the sum of the first %d numbers.\n", fact ,n);
    return 0;
    getch();
}