/* WAP TO ADD FIRST SEVEN TERMS OF THE FOLLOWING SERIES USING FOR LOOP */

#include <stdio.h>

int main(){
	int nth,factorial=1,i;
	float sum=0;
	
	printf("Enter the term up to which you want to calculate the sum of the series:  ");
	scanf("%d",&nth);
	
	for(i=1;i<=nth;i++){
		factorial=factorial*i;
		sum=sum+((i*1.0)/factorial);
		printf("%f\t",sum);
	}
	
	printf("\nthe sum of the number is : %f",sum);
	return 0;
}
