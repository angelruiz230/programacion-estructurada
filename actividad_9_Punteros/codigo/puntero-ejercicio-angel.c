#include<stdio.h>
int f_doble(int x)
{
    printf("\nel doble de tu numero es: %d", 2*x);
}
int f_triple(int *n)
{
    printf("\nel triple de tu numero es: %d", 3*(*n));
}
int main()
{
    int a;
    printf("dame un numero del 1 al 100:");
    scanf("%d", &a);
    f_doble(a);
    printf("\ntu numero es: %d",a);
    f_triple(&a);
    printf("\ntu numero es: %d",a);
    printf("\n-----------------------------------\n");
    int x=5;
    int *p;
    p=&x;
    printf("%d",x);
    printf("\n%d",p);
    printf("\n%d",*p);
     printf("\n-----------------------------------\n");
     int *v;
     v=(int*)malloc(5*sizeof(int));
     free(v);
    return 0;
}