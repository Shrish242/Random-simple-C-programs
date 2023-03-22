/* WAP TO CALCULATE THE SUM, SUB, DI, PRO, MOD OF THE GIVEN TWO NUMBER*/ 


#include <stdio.h>



//Funtion prototype.
int sum(int, int);
int sub(int, int);
int di(int, int) ;
int pro(int, int);
int mod(int, int);

//Funtion declaration.
int main(){
int a,b;

printf("Enter two number: ");
scanf("%d %d",&a,&b) ;

printf("the sum is : %d\n",sum(a,b));
printf("the sub is : %d\n",sub(a,b));
printf("the di is: %d\n",di(a,b));
printf("the pro is: %d\n",pro(a,b));
printf("the mod is: %d\n",mod(a,b));
return 0;
}


//Funtion defination
int sum(int i, int j){
return (i+j);
}

int sub(int i,int j){
return(i-j);
}

int di(int i,int j){
return (i/5);
}

int pro(int i,int j){
return (i*j);
}

int mod(int i, int j){
return(i%j);
}

 

