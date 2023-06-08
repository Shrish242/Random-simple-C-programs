//generating prime numbers from 1-100 using function

#include<stdio.h>
#include<conio.h>
void prime1(int , int);
int main(){
	int n , i;
	prime1(n , i);
}
void prime1(int n , int i){
	for ( i = 2; i <= 100; i++)
	{
		for ( n = 2; n <= i; n++)
		{
			if ( i == n)
			{
				printf("%d\t" , i);
			}	
			else if (i % n == 0)
			{
				break;
			}
			
		}
	}
		

}
