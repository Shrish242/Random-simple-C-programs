/* WAP to calculate the area of cirlce */

#include <stdio.h> 
#define pi 3.14

//prototype 
float area(float);


//declartion 
int main(){
    float r; 
    printf("Enter the radious of the circle: "); 
    scanf("%f",&r);
    printf("the area of the circle is : %f", area(r));
return 0;
}

//defination 
float area(float i) {
float area; 
area = pi * i* i; 
return area;
}
