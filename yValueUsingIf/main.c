#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
// If-Else Ladder
/*
int main()
{
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    if (x > 0)
    {
        y=1;
        printf("The value of Y here is: %d",y);
    }
    else if (x<0)
    {
        y=-1;
        printf("The value of Y here is: %d",y);
    }
    else
    {
        y=0;
        printf("The value of Y here is: %d",y);
    }
    return 0;
}
*/

// Nested If
/*
int main()
{
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    if (x>=0)
    {
        if (x>0)
        {
            y=1;
            printf("The value of Y here is: %d",y);
        }
        else
        {
            y=0;
            printf("The value of Y here is: %d",y);
        }
    }
    else
    {
        y=-1;
        printf("The value of Y here is: %d",y);
    }
    return 0;
}
*/

int main()
{
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    y = (x>=0?(x>0?1:0):-1);
    printf("The value of Y here is: %d",y);
    return 0;
}
