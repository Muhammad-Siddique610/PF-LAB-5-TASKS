#include <stdio.h>

int main()
{
    int a;
    printf("Enter A Number To Understand Pre And Post Increment ");
    scanf("%d",&a);

    printf("Number starts with %d\n",a);
    printf("Pre increment is %d \n\n", ++a );

    printf("So Now The Number is %d\n\n",a);

    printf("The post increment is %d \n\n", a++ );
    printf("as it is post increment so now the value of number is %d ", a);

}
