#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    int sid;
    char sname[20];
    float marks;    
    char opt;
    fp=fopen("student.txt","r");
    while(fscanf(fp,"%d %s %f",&sid,sname,&marks)!=EOF)
    {
        printf("%d %s %f\n",sid,sname,marks);
    }
    
}