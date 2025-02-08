#include<stdio.h>
int main()
{
    int totalDistance;
    float spentFuel,average;

    printf("enter Total distance(KM):");
    scanf("%d",&totalDistance);
    printf("enter fuel spent in liters:");
    scanf("%f",&spentFuel);

     average= totalDistance/spentFuel;

    printf("average fuel consumption(KM/LT) is:%.2f",average);

    return 0;
}
