#include<stdio.h>
int main()
{
    int n, row,col;
    printf("enter number:");
    scanf("%d",&n);


    for (row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col);    // changing col and type value to different type
        }
        printf("\n");

    }
     for (row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col);// same here
        }
        printf("\n");

    }
    return 0;
}

