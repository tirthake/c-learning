#include<stdio.h>
int main()
{
    float eweight,mweight;
    printf("enter your weight on earth:");
    scanf("%f",&eweight);
    //moon gravity is 17 parcebt than earth
    //we know weight=g*m


    mweight =eweight*0.17;
    printf("your weight in moon is :%f\n",mweight);






    return 0;
}
