#include<stdio.h>

int main()
{
    int prom;
    int mat;
    printf("ingresa tu promedio(0-100):");
    scanf("%d",&prom);
    printf("\ningresa la cantidad de materias reprobadas:");
    scanf("%d",&mat);//criterios de beca, mayor o igual a 85 y 0 reprobadas
    if(prom>=85 && mat==0)
        {
            printf("\nfelicidades, eres apto para la beca");
        }
    else
        {
            printf("\nno eres apto para la beca");
        }
    printf("\n--------------------------------\n");
    return 0;
}