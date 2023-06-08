#include<stdio.h>
#include<conio.h>
int main(){
    FILE *fp2;
    char s[80];
    fp2 = fopen("word.txt" , "rb");
    if (fp2 == NULL)
    {
        printf("File doesnot exist");
    }
    else{
        fgets(s , 100 , fp2);
        printf("The words are %s", s);
        fclose(fp2);
        getch();
        return 0;
    }    
}