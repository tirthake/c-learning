// C program to print the full pyramid pattern
#include <stdio.h>

int main()
{
    int n,row,col;
    printf("enter the n:");
    scanf("%d",&n);


    for (row =1; row<=n; row++)// first loop to print all rows
    {


        for (col = 1; col <=n-row; col++) // inner loop 1 to print white spaces
        {
            printf(" ");
        }


        for (col=1; col<=2*row-1; col++)// inner loop 2 to print star * character
        {
            printf("%d",col);   // change here different type
        }
        printf("\n");
    }
    return 0;
}


