/* 1+3^3/3!+5^5/5! .....nth term. */

#include <stdio.h>

int main(){
	int num,i,factorial=1,power=1,j,n;
	float sum=0;
	
	printf("Enter a number of the sum: ");
	scanf("%d",&num);
	
	for(i=1;i<=2*num;i++){
		//Since we have to get numeritor 
		//not affected by the previous calculation so pro =1
		
		if(i %2 ==0){
			continue;
			}
			else{
		power=1;
		factorial=1;
		//incase of factorial is get affected since the 
		//facotial of number has not so facotial = 1 been used by previous calculation
		for(j=1;j<=i;j++){
			factorial =factorial*j;
			power=power*i;
		}
	}

		sum=sum+(power*1.0/factorial);
		printf("%f\n",sum);
	}

	printf("the sum is: %f",sum);
	return 0;
}
