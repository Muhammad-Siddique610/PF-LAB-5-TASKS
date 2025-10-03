#include <stdio.h>

main()
{
	int marks;
	printf("Enter the marks obtained out of 100 ");
	scanf("%d",&marks);
	if(marks >=50)
	{
		if(marks >= 85)
		{
			printf("Passed With Distinction");
		}
		else
		{
		printf("Just Passed");
		}
	}
	else
	{
		printf("Not Passed ");
	}
}