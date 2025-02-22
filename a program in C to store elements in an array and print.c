#include<stdio.h>
int main()
{
int arr[10];
int b;

printf("enter 10 element in the array:\n");
for (b=0;b<10;b++)
{
    printf("element-[%d]:",b);
    scanf("%d",&arr[b]);
}



for (b=0;b<10;b++)
{
    printf("%d\t",arr[b]);
}
return 0;
}
