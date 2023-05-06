#include<stdio.h>
#include<conio.h>
void aos( int );
void aoc( int );
void aor( int , int);
int main()
{
    int a , r ,x , y;
    printf("enter the side\n");
    scanf("%d", &a);
    aos(a);

    printf("enter the radius\n");
    scanf("%d", &r);
    aoc(r);

    printf("enter the first side\n");
    scanf("%d", &x);
    printf("enter the second side\n");
    scanf("%d", &y);
    aor(x , y);
    return 0 ;

}
void aos(int a){
    int area;
    area = a * a;
    printf("%d\n", area);
}
void aoc(int r){
    int  areac;
    areac = r * r * 3.14;
    printf("%d\n", areac);
}
void aor(int x ,int y){
    int arear;
    arear = x * y;
    printf("%d\n", arear);
}