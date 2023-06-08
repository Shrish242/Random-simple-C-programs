#include <stdio.h>

int main() {
    int n , s[90];
    printf("Enter the total numbers");
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        printf("Enter the number of numbers to write: ");
    scanf("%d", &s[i]);
    }
    
    FILE *file = fopen("NUMBER.TXT", "a+");
    if (file == NULL) {
        printf("Error creating or opening the file.\n");
        return 1;
    }
    for ( int i = 0; i <= n; i++)
    {
        fprintf(file, "%d\n", s[i]);
    }
    fclose(file);
    return 0;
}
