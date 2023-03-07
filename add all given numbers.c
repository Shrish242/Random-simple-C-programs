#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("%d ", i);
    }
    printf("\n%d is the sum of the first %d numbers.\n", sum, n);
    return 0;
}
