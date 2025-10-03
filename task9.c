#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if((num & 1) == 1 )
    {
        printf("The Number %d Is Odd",num);
    }
    else
        printf("The Number %d Is Even",num);
}