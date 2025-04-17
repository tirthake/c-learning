
#include<stdio.h>
int main()
{
    int n, row,col;
    printf("enter number:");
    scanf("%d",&n);


    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {

            printf("%c ",col+64);// if AA BB THEN CHANGE ROW
        }                           //SMALL LETTER +96 ASCII

        printf("\n");

    }
    return 0;
}
