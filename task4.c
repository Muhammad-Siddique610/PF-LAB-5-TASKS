#include <stdio.h>

int main()
{
    char continent,country;
    printf("What is the name of continent? \n A = Asia \n E = Europe ");
    scanf(" %c",&continent);
    switch (continent)
    {
        case 'A':
        {
            printf("What Is The Country In Asia \n P = Pakistan \n I = India ");
            scanf(" %c",&country);
            switch (country)
            {
                case 'P':
                {
                    printf("The Continent You Selected Is Asia And Country Is Pakistan");
                    break;
                }
                case 'I':
                {
                    printf("The Continent You Selected Is Asia And Country Is India");
                    break;
                }
                default:
                {
                    printf("No Record Of This Country In Asia Found In Our Database ");
                    break;
                }
            }
            break;
        }
        case 'E':
        {
            printf("What Is The Country In Europe \n F = France \n G = Germany ");
            scanf(" %c",&country);
            switch(country)
            {
                case 'F':
                {
                    printf("The Continent You Selected Is Europe And Country Is France ");
                    break;
                }
                case 'G':
                {
                    printf("The Continent You Selected Is Europe And Country Is Germany ");
                    break;
                }
                default:
                {
                    printf("No Record Of This Country In Europe Found In Our Database ");
                    break;
                }
            }
            break;
        }
        default:
        {
            printf("Sorry Currently We Have Maintained Database For Two Continents. ");
            break;
        }
    }
}