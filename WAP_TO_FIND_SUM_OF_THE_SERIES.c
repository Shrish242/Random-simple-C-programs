//WAP to find sum of the series 1/1 + 1/2 + 1/3+...+1/n.

#include <stdio.h>

int main(){
	int num,i;
	float sum=0;
	
	printf("Enter the nth term up to which we have to find the sum of ther series: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum=sum+(1*1.0/i);
		printf("%f\t",sum);
	}
	printf("\nthe sum of the nth term is : %f",sum);
	
	
	
	
	return 0;
}
