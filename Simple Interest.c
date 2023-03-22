/* WAP to find the simple interest*/



#include <stdio.h>

//prototype
float si(float, float, float) ;

//declaration
int main(){
float t,r,p;

printf("Enter the value of P,T,R: ");
scanf ("%f %f %f",&p,&t,&r);

printf("the SI is: %.2f",si(p,t,r));

return 0;
}
//defination
float si(float i,float j, float k){
float si;
si = (i*j*k)/100;
return(si);
}


