#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    char c;
    float cel,fah;
    printf("Enter the temperature in C/F: ");
    scanf("%c",&c);
    if (c == 'C' || c == 'c')
    {
        printf("Enter the temp in Celsius: ");
        scanf("%f",&cel);
        fah = 32 + ((cel * 9)/5);
        printf("The Fahrenheit is : %f",fah);
    }
    else if (c == 'F' || c == 'f')
    {
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f",&fah);
        cel = (5/9) * (fah - 32);
        printf("The Celsius is : %f",cel);
    }
    else
    {
        printf("Not valid character");
    }
    return 0;
}
