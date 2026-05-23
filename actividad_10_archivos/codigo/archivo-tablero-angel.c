#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tablero[5][5];
    char nombre[20];
    char linea[100];
    for(int i=0;i<5;i++)//inicializacion de tablero
    {
        for(int j=0;j<5;j++)
        {
            tablero[i][j]='~';

        }
    }
    for(int i=0;i<5;i++)//impresion visual del tablero
    {
        for(int j=0;j<5;j++)
        {
            tablero[1][2]='b';
            tablero[3][4]='x';
            tablero[2][1]='o';
            printf("%c ",tablero[i][j]);
        }
        printf("\n");
    }

    FILE*archivo;
    archivo=fopen("tablero.txt","w");//para cerrar es fclose(archivo);
    printf("\nescribe tu nombre:");
    fgets(nombre,sizeof(nombre),stdin);
    fprintf(archivo,"%s",nombre);
    fprintf(archivo,"angel fernando ruiz arias\n");
     for(int i=0;i<5;i++)//impresion visual del tablero
    {
        for(int j=0;j<5;j++)
        {
            fprintf(archivo,"%c ",tablero[i][j]);
        }
        fprintf(archivo,"\n");

    }
    fprintf(archivo,"angel fernando ruiz arias\n");
    fprintf(archivo,"%s",nombre);
    fclose(archivo);
    archivo=fopen("tablero.txt","r");
    while (fgets(linea, sizeof(linea), archivo)) {
    printf("%s", linea);
    }
    printf("%s",linea);
    fclose(archivo);
    return 0;
}