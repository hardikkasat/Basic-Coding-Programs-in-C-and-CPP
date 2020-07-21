#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the value of the number: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("NUMBER IS EVEN!");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    return 0;
}
