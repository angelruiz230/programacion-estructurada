#include<stdio.h>
#include<string.h>
int main()
{
    char nom[4][20];
     for(int x=0;x<4;x++)
    {
        fgets(nom[x],sizeof(nom[x]),stdin);
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        printf("%s",nom[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        printf("%d",nom[i]);
        printf("\n");

    }
    return 0;
}