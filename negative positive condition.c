//negative poistive
#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);




    if(num>0)
        printf("positive");


    else if(num<0)
        printf("negative");
    else
        printf("zero");
    return 0;
}
