#include<stdio.h>

struct alumno
{
    char nombre[20];
    float cal;
    int act;//numero de actividades
    int derecho;
};
union Dato{
int entero;
float decimal;
};
int main()
{
    struct alumno grupo[3];
    for(int i=0;i<3;i++)
    {
        printf("NOMBRE:");
        fgets(grupo[i].nombre,20,stdin);//se puede poner el indicador ->
        printf("\nNUMERO DE ACTIVIDADES:");
        scanf("%d",&grupo[i].act);
        printf("\nCALIFICACION:");
        scanf("%f",&grupo[i].cal);
        printf("\nDERECHO:");
        scanf("%d",&grupo[i].derecho);
        getchar();

    }
    for(int j=0;j<3;j++)
    {
        printf("%s\n",grupo[j].nombre);
    }
    union Dato x;
    x.entero=10;
    printf("%d\n",x.entero);
    x.decimal=5.4;
    printf("%f\n",x.decimal);
    return 0;
}