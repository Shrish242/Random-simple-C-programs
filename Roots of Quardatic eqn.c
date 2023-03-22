/* WAP to calculate roots of a quad equation*/



#include <stdio.h> 
#include <math.h>

//funtion prototype 
float ri (int , int ,int); 
float r2 (int , int , int);

//funtion calling 
int main(){
   int a,b,c;
   
    printf("Enter three numbers: "); 
    scanf("%d %d %d",&a,&b,&c);
   
    printf("first root: %.2f \n", r1(a,b,c)); 
	printf("Second root: %.2f \n", r2(a,b,c));
	
return 0;
}

//funtion defination 
float r1(int i, int j, int k){  
    return ((-j+pow((j*j-4*i*k), 0.5))/(2*i));  
}


float r2(int i, int j, int k){ 
    return ((-j-pow((j*j-4*i*k), 0.5))/(2*i)); 
} 
