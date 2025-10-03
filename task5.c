#include <stdio.h>

int main()
{
    int num;
    printf("What is the number that you want to check whether is divisible by 2 and 3 or not! ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        if(num % 3 == 0)
        {
            printf("Yes, The Number Is Divisble By 2 and 3. ");
        }
        else
        {
            printf("No, The Number Is Not Divisible By 3 But Divisible By 2. ");
        }
    }
    else
    {
        printf("No The Number Is Not Divisible By 2");
    }
}