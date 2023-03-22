/* WAP to read the number of days and convert it into years and months.*/

#include <stdio.h>

int years_months(int);

int main(){
     int days;
    
	 printf("Enter number of days: "); 
     scanf("%d",&days);
    
	 years_months(days); 
	 return 0;
}

int years_months(int i){
	int years, months, days, remaining_days; 
	years =i/365; 
	remaining_days =i % 365; 
	months = remaining_days / 30; 
	i= remaining_days % 30;
    
	printf("number of years: %d\n", years); 
    printf("number of months: %d\n", months); 
    printf("number of days: %d\n", i);
    
	 return years_months;
}

