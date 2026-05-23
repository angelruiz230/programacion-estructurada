#include<stdio.h>

int main()
{
    int ncal, cal, opc;
    float prom, suma;
    int i;

    do{
        printf("\n1. Sacar promedio");
        printf("\n0. Salir\n");
        scanf("%d",&opc);

        if(opc == 1){
            printf("Escribe el numero de calificaciones que vas a promediar: ");
            scanf("%d", &ncal);

            suma = 0;

            for(i = 1; i <= ncal; i++){
                do{
                    printf("Ingresa la calificacion (0-100): ");
                    scanf("%d",&cal);

                    if(cal > 100 || cal < 0){
                        printf("Error, ingresa un valor entre 0 y 100\n");
                    }

                }while(cal > 100 || cal < 0);

                suma += cal;
            }

            prom = suma / ncal;
            printf("\nEl promedio es: %.2f\n", prom);
        }

    }while(opc != 0);

    printf("\nGracias...\n");

    return 0;
}