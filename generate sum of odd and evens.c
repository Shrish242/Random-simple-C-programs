#include<stdio.h>
int main(){
    int n , i , so = 0 , se = 0;
    for(i=1; i<=10; i++){ 
        printf("enter the number:");
        scanf("%d", &n);
        if (n % 2 == 0){
            se = se + n;
        }
        else{
            so = so + n;
        }
    }
        printf("sum of evens number = %d\n" ,se);
        printf("sum of odd numbers = %d\n", so);
    return 0;
}