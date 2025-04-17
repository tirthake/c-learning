#include<stdio.h>
int main()
{
    int numterms;
    printf(" enter fibonacci number terms:");
    scanf("%d",&numterms);

    int firstnumber=0,secondnumber=1;
    printf("FIBONACCI SERIES UPTO %d:\n",numterms);
    printf("%d%d",firstnumber,secondnumber);


    for (int i=3; i<=numterms; i++)
    {
        int nextnumber=firstnumber+secondnumber;
        printf("%d",nextnumber);
        firstnumber=secondnumber;
        secondnumber=nextnumber;
    }


    printf("\n");


    return 0;
}
