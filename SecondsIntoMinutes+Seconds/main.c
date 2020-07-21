#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec,min,rem_sec;
    printf("Enter the value of seconds: ");
    scanf("%d",&sec);
    min = sec / 60;
    rem_sec = sec % 60;
    printf("%d seconds are equal to %d minutes and %d seconds.",sec,min,rem_sec);
    return 0;
}
