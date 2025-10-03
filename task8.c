#include <stdio.h>

int main()
{
    int num;
    int bit2nd;
    int fnum;

    printf("Enter the number: ");
    scanf("%d",&num);

    bit2nd = 1 << 2 ;
    fnum = num ^ bit2nd;
    printf("The number was %d and XOR 2nd bit toggled is %d ", num, fnum);
}
