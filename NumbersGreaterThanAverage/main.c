#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],sum=0,count=0;
    float average;
    printf("Enter the numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        sum = sum + a[j];
    }
    average = (float)sum/10;
    for(int k=0;k<10;k++)
    {
        if(a[k]>average)
        {
            count++;
        }
    }
    printf("The average of the input numbers is %0.2f\n",average);
    printf("%d numbers are greater than %0.2f(Average)",count,average);
    return 0;
}
