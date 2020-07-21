#include <stdio.h>
#include <stdlib.h>
struct library
{
    char name[30];
    int price;
    int pages;
};
struct library book[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter the name,price,pages of book: \n");
        scanf("%[^\n]%*c %d %d",book[i].name,&book[i].price,&book[i].pages);
    }
    for(int i=1;i<=3;i++)
    {
        printf("The details of book %d is %s %d %d \n",i,book[i].name,book[i].price,book[i].pages);
    }
    return 0;
}
