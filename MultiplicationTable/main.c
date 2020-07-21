#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,multiply;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i =1;i<=10;i++)
    {
        multiply = n*i;
        printf("%d X %d = %d \n",n,i,multiply);
    }
    return 0;
}
