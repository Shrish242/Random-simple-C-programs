//Suppose a file named “Num.txt” contains a list of integers. Write a program to extract the prime numbers only from that file and write them on “Prime.txt” file.

#include<stdio.h>
int main(){
    FILE *fp1 ,*fp2;
    int i , num;
    fp1=fopen("Num1.txt","w+");
     fp2=fopen("Prime2.txt","w");
    if (fp1==NULL)
    {
        printf("File couldnt be created to take numbers");
        return 1;
    }
    if (fp2 == NULL) {
        printf("Error opening file Prime.txt\n");
        return 1;
    }
    for (i=1;i<=200;i++)
    {
        fprintf(fp1,"%d \n",i);
    }

   rewind(fp1);
    while (fscanf(fp1, "%d", &num) != EOF) {

        for (i = 2; i <= num ; i++) {
            if (num % i == 0) {
                break;
            }
        }
        if (i == num) {
            fprintf(fp2, "%d\n", num);
        }
    }
               fclose(fp1);
               fclose(fp2);
                return 0;

}