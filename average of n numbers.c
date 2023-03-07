#include<stdio.h>
int main()
{
    int n , count;
    float x, average, sum;
    char w;
    rep:
    printf("how many numbers to find average of:");
    scanf("%d" ,&n);
    for(count = 1 ; count<=n ; count++){
        printf("x=");
        scanf("%f", &x);
        sum += x;

    }
    average = sum/n;
    printf("the average= %f\n", average);
    printf("do you want to continue(y/n):");
    scanf("%c",&w);
    if( w == 'y'){
        goto rep;
        }
        else{ 
        printf("thank you");
        }

}