#include<stdio.h>
int a,b, result;
int suma(int a,int b);

int main()
{
    printf("dame dos numeros para sumar:");
    suma(a,b);
    return 0;

}
 int suma(int a,int b)
 {
     scanf("%d",&a);
     scanf("%d",&b);
     result=a+b;
     printf("%d", result);
 }