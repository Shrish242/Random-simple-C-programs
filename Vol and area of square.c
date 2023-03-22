/* WAP to calculate the volume and area of sphere.*/



#include <stdio.h> 
#define pi 3.14

float vol (float); 
float area (float);

int main(){
     float r; 
     printf("Enter the value of radious: "); 
     scanf("%f",&r); 
     printf("the volume: %\n", vol(r)); 
	 printf("the area: %f\n", area(r)); 
	 return 0;
}
	 
float vol (float i) {
return(4.0/3*pi*i*i*i);
}

float area(float i) {
return(4*pi*i*i);
}
