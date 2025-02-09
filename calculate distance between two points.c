#include<stdio.h>
#include<math.h>   // for sqrt and pow
int main()
{
    int x1,x2,y1,y2;
    float distance;// distance can be fraction , thats why using floating type
    printf("Enter the value of x1:");
    scanf("%d",&x1);

    printf("Enter the value of y1:");
    scanf("%d",&y1);
    printf("Enter the value of x2:");
    scanf("%d",&x2);
    printf("Enter the value of y2:");
    scanf("%d",&y2);
    distance= sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // use pow for power
    printf("\n The distance between two points are:%.4f",distance);// use .4 for 4 digit fraction
    return 0;
}
