#include<stdio.h>
#include<conio.h>
int main(){
    FILE *fp1;
    fp1 = fopen("word.txt" , "wb");
    if (fp1 == NULL)
    {
        printf("File wasnot created");
    }
    else{
        printf("File successfull created");
    }
    fputs("Welcome to Ghorahi" , fp1);
    fclose(fp1);
    return 0 ;

}