#include<stdio.h>

void reverse(int arr[], int n );
void printarr(int arr[], int n);
int main()
{
    int arr = {1,2,4,5,7};
    reverse(arr, 4 );
    printarr(arr, 4 );
    return 0 ;
}

void printarr(int arr[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    
} 
void reverse(int arr[], int n ){
    for ( int i = 0; i < n/2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[i-n-1];
        arr[i] = secondval;
        arr[i-n-1]= firstval;

        
    }
    
}
 