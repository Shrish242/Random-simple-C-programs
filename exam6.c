#include <stdio.h>

int main() {
    char A[20]="TRIBHUWAN UNIVERSITY";
    int i,count = 0;
   //  printf("Enter a character array: ");
   //  gets(A);

    while( A[i] != '\0') {
        if (A[i] == 'I') {
            count++;
        }
        i++;
    }

    printf("The number of times 'I' occurs is %d\n", count);

    return 0;
}