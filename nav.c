#include<stdio.h>
int main(){
    FILE *fp1 , *fp2;
    int n;
    fp1=fopen("nav.txt","r");
    fp2=fopen("even.txt","w");
    while(fscanf(fp1,"%d",&n)!=EOF){
        if(n%2==0)
        fprintf(fp2,"%d,",n);
    }
printf("Data successfully copied\n");
fclose(fp1);
fclose(fp2);
return 0;
}