
#include<stdio.h>
int main()
{
    int n, row,col;
    printf("enter number:");
    scanf("%d",&n);


    for (row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {

            printf("%c",col);// just change col to row for 333 22 1
        }
        printf("\n");

    }
    return 0;
}
