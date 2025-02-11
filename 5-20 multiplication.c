// write a code to multiplication of number 5-15
#include<stdio.h>
int main()
{
    int i;
    unsigned long long multi=1;  // initialized multi=1 because anything *0=0 so , we start with 1
// unsigned long long for large number of intiger
    for

    ( i=5; i<=20; i++)
        multi*=i;

    {
        printf("the multiplication of number 5-20 is:%llu\n",multi); // fromet specifier for unsigned long long is %llu
    }
    return 0;
}
