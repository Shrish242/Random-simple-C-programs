#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fp1 , *fp2;
    int n;
    fp1 = fopen("Number.txt" , "r");
    fp2 = fopen("eve.txt" , "w");
    while (fscanf(fp1 , "%d" , &n)!=EOF)
    {
        if (n%2 == 0)
        {
            fprintf(fp2 , "%d\t" , n);
        }
    }
    printf("successfull created");
    fclose(fp1);
    fclose(fp2);
    return 0;
    

}