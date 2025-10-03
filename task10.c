#include <stdio.h>

int main()
{
    int num;
    int leftShift;
    int rightShift;
    int shiftConst = 1;

    printf("Enter the number to shfited ");
    scanf("%d",&num);
    leftShift = num << shiftConst;
    rightShift = num >> shiftConst;

    printf("The Number Was %d \n",num);
    printf("The Left Shifted Number by %d places is %d\n",shiftConst , leftShift);
    printf("The Right Shifted Number by %d places is %d\n",shiftConst,rightShift);
    
}