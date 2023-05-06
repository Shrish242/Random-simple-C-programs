#include <stdio.h>
#include <string.h>

int main() {
    char st[50], rs[50];
    printf("Enter a string:");
    scanf("%s", st);
    strcpy(rs, st);
    printf("\nReverse string:\n");
    strrev(st);
    printf("%s\n", st);
    if (strcmp(st, rs) == 0) {
        printf("It is a palindrome.");
    } else {
        printf("It is not a palindrome.");
    }
    return 0;
}