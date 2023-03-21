#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][30], temp[30];
    int i , j;
    for ( i = 0; i < 10; i++)
    {
        printf("enter name:");
        scanf("%s", &name[i]);
    }
    //arranging the name
    for ( i = 0; i < 10 ; i++)
    {
        for ( j = i + 1; j < 10; j++)
        {
            if (strcmp(name[i] ,name[j])<0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
        
    }
 printf("\n name in ascending order:\n");
 for ( i = 0; i < 10; i++)
 {
    printf("%s\n", name[i]);
 }
 return 0;
    
}