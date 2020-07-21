#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,rem;
    printf("Enter the value of the integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        sum = sum + rem;
    }
    printf("The sum of the digits of the integer is: %d",sum);
    return 0;
}
