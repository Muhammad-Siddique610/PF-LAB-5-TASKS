#include <stdio.h>

main()
{
	int userAge;
	char gender;
	printf("What Is Your Age ");
	scanf("%d",&userAge);
	printf("What Is Your Gender \n Male=M \n Female=F \n Other=O ");
	scanf(" %c",&gender);
	
	if(userAge >= 18)
	{
		if(gender == 'M')
		{
			printf("Adult Male");
		}
		else if(gender == 'F')
		{
			printf("Adult Female");
		}
		else
		{
			printf("Minor");
		}
	}
	else
	{
		printf("Not Adult");
	}
}