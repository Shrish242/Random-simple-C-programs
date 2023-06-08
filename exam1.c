//Make a program using structure of booklist having data member's
// title, author, and cost. Enter four data and calculate total cost.

#include<stdio.h>
#include<conio.h>

struct booklist
{
    char title[80];
    char author[80];
    int cost;
    int totalcost;
};
int main(){
    struct booklist bl;
    for ( int i = 0; i <= 3; i++)
    {
        printf("Enter the book name: ");
        scanf("%s", bl.title);
        printf("Enter its author: ");
        scanf(" %s", bl.author);
        printf("Enter the cost: ");
        scanf("%d", &bl.cost);
        bl.totalcost =bl.totalcost + bl.cost;
    }
    for ( int i = 0; i <= 3; i++)
    {
        printf("%s\t",  bl.title);
        printf("%s\t",  bl.author);
        printf("%d\t",  bl.cost);
    }
    printf("The total cost for it is : %d", bl.totalcost);
    return 0 ;

}
