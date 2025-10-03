#include <stdio.h>

main()
{
	int device;
	int brand;
	printf("Choose A Device \n 1. Phone \n 2. Laptop ");
	scanf("%d",&device);
	switch(device)
	{
		case 1:
			printf("What Phone Brand You Want To Choose? \n 1. Samsung \n 2. Apple ");
			scanf("%d",&brand);
			switch (brand)
			{
				case 1:
					printf("You Have Chosen A Samsung Phone ");
					break;
				case 2:
					printf("You Have Chosen An Apple Phone ");
					break;
				default :
					printf("You Have Chosen Number That Is Out Of Range ");
					break;
			}
			break;
		case 2:
			printf("What Laptop Brand You Want To Choose? \n 1. Dell \n 2. HP ");
			scanf("%d",&brand);
			switch(brand)
			{
				case 1:
					printf("You Have Chosen Dell Laptop ");
					break;
				case 2:
					printf("You Have Chosen HP Laptop ");
					break;
				default:
					printf("You Have Chosen Number That Is Out Of Range ");
					break;
				
			}
			break;
		default:
			printf("You Have Chosen Number That Is Out Of Range ");
					break;
	}
}
