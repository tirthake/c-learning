#include<stdio.h>
int main()
{

    int day,years,month;
    printf("enter the value of day:");
    scanf("%d",&day);

    years=day/365;
    day%=365;// calculate the remaining days after year

    month=day/30;
    day%=30;// calculate the remaining day after month

    day=day;// remaining days as days

    printf("%d year's\n",years);
    printf("%d month's",month);
    printf("\n%d day's",day);
    return 0;
}
