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

            printf("%d ",row%2);// using odd even modulas
        }

        printf("\n");

    }
    return 0;
}
