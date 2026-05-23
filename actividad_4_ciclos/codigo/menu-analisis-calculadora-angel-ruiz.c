#include<stdio.h>

int main()
{
    int y,x,c,opc;
    do{
    do{
    printf("elige una opcion:\n");
    printf("1.analizar numero\n2.calculadora\n3.salir\n");
    scanf("%d", &opc);

    switch(opc)
    {
        case 1://alaizar numero
            printf("ingresa un numero:");
            scanf("%d",&x);
            if(x%2==0)
            {
                printf("\ntu numero es par\n");
            }
            //////////
            else if(x%2!=0)
            {
                printf("\ntu numero es impar\n");
            }

            break;
        do{
        do{
        case 2://calculadora
            printf("\nelige que hacer:\n");
            printf("1.sumar\n");
            printf("2.restar\n");
            printf("3.regresar\n");
            scanf("%d",&c);
            switch(c)
            {
                case 1://suma
                    printf("dame un numero entero:");
                    scanf("%d",&x);
                    printf("dame otro numero entero:");
                    scanf("%d",&y);
                    int resultado=x+y;
                    printf("la suma de esos dos numeros es: %d\n",resultado);
                    break;
                case 2://resta
                    printf("dame el minuendo(entero):");
                    scanf("%d",&x);
                    printf("dame el sustraendo(entero):");
                    scanf("%d",&y);
                    int diferencia=x-y;
                    printf("la diferencia de esos dos numeros es: %d\n",diferencia);
                    break;
                case 3:
                    printf("regresando...\n");
                    break;
                default:
                    printf("\nvalor no valido vuelve a intentarlo\n");
            }
            }while(c==1 || c==2);
            }while(c!=3);

            break;


        case 3://salir
            printf("adios...");
            return 0;
            break;
        default:
            printf("opcion no valida.\nselecciona que hacer...\n");
        break;
    }
    }while(c==3);
    }while(opc!=3);

    return 0;
}