#include<stdio.h>
#include<math.h>
int main()
{
    int a , i , m ;
    printf("enter the number you need table of:");
    scanf("%d" ,& a);
    for (i=1 ; i <= 10; i++)
{
    m = a * i;
    printf("%d" "*" "%d" "=" "%d\n" ,a ,i, m );
}
return 0;
}