// displaying month number.
#include<stdio.h>
int main()
{
    int number;
    printf("enter month number:");
    scanf("%d",&number);

    switch(number)
    {
    case 1:
    {
        printf("january");
    }
    break;
    case 2:
    {
        printf("february");
    }
    break;
    case 3:
    {
        printf("march");
    }
    break;
    case 4:
    {
        printf("april");
    }

    break;
    case 5:
    {
        printf("may");
    }
    break;
    case 6:
    {
        printf("june");
    }
    break;
    case 7:
    {
        printf("july");
    }
    break;
    case 8:
    {
        printf(" august");
    }
    break;
    case 9:
    {
        printf("september");
    }
    break;
    case 10:
    {
        printf("october");
    }
    break;
    case 11:
    {
        printf("november");
    }
    break;
    case 12:
    {
        printf("december");
    }
    break;

    default:
    {
        printf("not a valid number");
    }
    break;
    }
    return 0;
}
