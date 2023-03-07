#include<stdio.h>
int main()
{
    char j, i;
      for (i= 1; i<= 5; i++){ 
    for (j= 5; j>= 1; j--){
        if (j>=i)
    {
        printf("*");
    }
    }
    printf("\n");
      }
    return 0;
}