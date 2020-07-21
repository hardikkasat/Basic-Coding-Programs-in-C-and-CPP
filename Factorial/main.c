#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,fact =1;
    printf("Enter the factorial number: ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        fact = fact * n;
        n=n-1;
    }
    printf("The factorial of the given number %d is %d",m,fact);
    return 0;
}
