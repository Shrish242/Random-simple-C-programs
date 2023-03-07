#include <stdio.h>
#include <ctype.h>

int main() {
    float n1, n2, result;
    char o;
    printf("Enter first number:\n");
    scanf("%f", &n1);
    printf("Enter your operator for operation (+, -, *, %%) :\n");
    scanf(" %c", &o);
    printf("Enter second number:\n");
    scanf("%f", &n2);

    switch (o) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '%':
            result = (int)n1 % (int)n2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    printf("%.2f %c %.2f = %.2f\n", n1, o, n2, result);
    return 0;
}
