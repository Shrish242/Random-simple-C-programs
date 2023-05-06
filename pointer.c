#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    printf("%u",&ptr);
    
    return 0;
}