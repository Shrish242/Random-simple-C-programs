/* Write a program to find the prime number from 1 to 500. */

#include <stdio.h>

int main(){
	int prime,i,count,j;
	
	printf("ALL THE PRIME NUMBER BETWEEN THE RANGE OF 1 to 500 is:\n ");
	for(i=1;i<=500;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i % j == 0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",i);
		}
		
	}
	return 0;
}
