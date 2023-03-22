/* WAP TO FIND THE NUM IS ARMSTONG NUMBER OR NOT */
#include <stdio.h>
#include <math.h>

int main(){
	int a,i,sum=0,rem=0,b;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	
	b=a;
	
	while(a!=0){
		rem = a % 10;
		sum=sum+pow(rem,3);
		a=a/10;
	}
	
	if(b==sum){
		printf("Its a Armstrong number.");
	}else{
		printf("Its not a Armstrong number.");
	}
	return 0;
}
