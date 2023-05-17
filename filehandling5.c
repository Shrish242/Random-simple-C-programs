#include<stdio.h>
#include<conio.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{ 
    int check;
  char *dirname[30];
  printf("enter the name of diretory you want to operate:");
  scanf("%s", dirname);
     check = mkdir(dirname);
     if (!check)
     {
      printf("created");
     }
     else{
      printf("not done");
      exit(1);
     }
     getch();
     system("dir");
}
