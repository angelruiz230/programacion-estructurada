#include<stdio.h>
#include<string.h>
int main()
{
    int numero[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&numero[i]);
    }
    for(int s=0;s<5;s++)
    {
        printf("%d",&numero[s]);
        printf("\n");
    }
    return 0;
}