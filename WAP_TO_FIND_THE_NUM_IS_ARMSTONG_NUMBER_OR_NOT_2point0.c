#include <stdio.h>
#include <math.h>

int main(){
	int count=0,a1,a,i,sum=0,rem=0,b;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	
	b=a;
	a1=a;
	
	while(a1!=0){
		rem =a1 % 10;
		count++;
		a1=a1/10;
	}
	
	while(a!=0){
		rem = a % 10;
		sum=sum+pow(rem,count);
		a=a/10;
	}
	
	if(b==sum){
		printf("Its a Armstrong number.");
	}else{
		printf("Its not a Armstrong number.");
	}
	return 0;
}
