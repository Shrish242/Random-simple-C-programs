//Suppose a file named “Num.txt” contains a list of integers. Write a program to extract the prime numbers only from that file and write them on “Prime.txt” file.
#include <stdio.h>
int main() {
    FILE *fp1,*fp2 , *fp3;
    int i,num;
    fp1 = fopen("Num.txt", "w");
    fprintf(fp1, "23 6 8 19 35 11 2 17 29 5 2 56 43 2654 765 876 32 1 54 34 4 43 4231 45 65 62 64 32 23 54 64 62 76");
    fclose(fp1);
    fp2 = fopen("Prime.txt", "w");
    fp3 = fopen("Num.txt","r");

    if (fp1 == NULL) {
        printf("Error creating file Num.txt\n");
        return 1;
    }
    if (fp3 == NULL) {
        printf("Error opening file Num.txt\n");
        return 1;
    }
    if (fp2 == NULL) {
        printf("Error opening file Prime.txt\n");
        return 1;
    }
    while (fscanf(fp3, "%d", &num) != EOF) {
         for (i = 2; i <= num ; i++) {
            if (num % i == 0) {
                break;
            }
        }
        if (i == num) {
            fprintf(fp2, "%d\n", num);
        }
    }
    fclose(fp2);
    fclose(fp3);
    return 0;
}