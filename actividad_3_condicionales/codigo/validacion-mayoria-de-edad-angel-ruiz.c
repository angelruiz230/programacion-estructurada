#include<stdio.h>

int main()
{
    int a,b=18;
    printf("ingresa tu edad:");
    scanf("%d",&a);
    if(a>=b)
        {
          printf("\neres mayor de edad(18)");
        }
    else
        {
            printf("\neres menor de edad");
        }
    printf("\n------------------------\n");
    return 0;

}