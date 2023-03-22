

/* 1/1!+2^2/2!+3^3/3!.....nth term. */


#include <stdio.h>

int main(){
	int num,i,factorial=1,power=1,j;
	float sum=0;
	
	printf("Enter a number of the sum: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		//Since we have to get numeritor 
		//not affected by the previous calculation so pro =1
		power=1;
		//incase of factorial it does not get affected since the 
		//facotial of number has been used by previous calculation
		factorial =factorial*i;
		for(j=1;j<=i;j++){
			power=power*i;
		}
		sum=sum+(power*1.0/factorial);
		printf("%f\n",sum);
	}
	printf("the sum is: %f",sum);
	return 0;
}

