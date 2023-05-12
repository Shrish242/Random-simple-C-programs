#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int sid;
    char opt;
    char sname[20];
    float marks;
    fp=fopen("student.txt","a");
    add:
    printf("Enter student id:");
    scanf("%d",&sid);
    printf("Enter student name:");
    scanf("%s",sname);
    printf("Enter marks:");
    scanf("%f",&marks);
    fprintf(fp,"%d %s %f\n",sid,sname,marks);
    printf("Do you want to add another record(y/n):");
    opt = getche();
    if(opt=='y'||opt=='Y')
    goto add;
    fclose(fp);
    getch();
    return 0;
}