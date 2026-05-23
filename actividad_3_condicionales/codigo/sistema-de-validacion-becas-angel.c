#include<stdio.h>

int main()
{
    int c,d,f;
    printf("\ningresa tu edad:");
    scanf("%d",&f);
    printf("\ningresa tu promedio(0-100):");
    scanf("%d",&c);
    printf("\ningresa la cantidad de materias reprobadas:");
    scanf("%d",&d);
    if(c>=90 && d==0 && f>=18)
       {
            printf("\nfelicidades, eres apto para la beca");
       }
    else if(c>=90 && d<=2 && f>=18)
        {
            printf("\nno obtuviste la beca, pero puedes reinscribirte");
        }
    else if(c>=90 && d<=3 && f>=18)
        {
            printf("\nestas en situacion critica");
        }
    else if(c<90 && f>=18)
        {
            printf("\nno cumples con el promedio necesario");
        }
    else if(d<18)
        {
            printf("\nno eres mayor de edad, no puedes tener beca");
        }
    printf("\n--------------------------------\n");
    return 0;

}