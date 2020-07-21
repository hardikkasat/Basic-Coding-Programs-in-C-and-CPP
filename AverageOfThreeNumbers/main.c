#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,average;
    printf("Enter the three numbers: \n");
    scanf("%f %f %f",&a,&b,&c);
    average = (a+b+c)/3;
    printf("The average of the given three numbers %f,%f and %f is: %f",a,b,c,average);
    return 0;
}
