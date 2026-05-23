#include<stdio.h>
    int main()
    {
        ///// 1
        int a = 3;
        int b = 4;
        int c = a++ + --b;//el valor de "a" y de "b" se modifican en esta linea y se realiza la operacion con esto numeros nuevos, como a tiene el ++ en posfijo, se toma el valor de 3
        //y el valor de b se modifica antes de operar asi que sumaria 3+3
        printf("%d %d %d\n", a, b, c);//el nuevo valor de a sera 4 y el valor de b sera 3 por lo que se imprimiran en ese orden y suma 6
        ///// 2
        int x = 10;
        int y = 3;
        printf("%d\n", x + y * 2); //por jerarquia de operaciones lo que sucedera es que se multiplicara primero los numeros y luego se sumaran resultando en el numero 16
        printf("%d\n", (x + y) * 2);//aqui mismo por jerarquia de operaciones se realizara el calculo de los parentesis primero por lo que se suma y a la suma se multiplica por 2 y resulta 26
        ///// 3
        int i = 5;
        printf("%d\n",i++);//aqui primero se imprimira el 5 porque al tener en el posfijo el ++ entonces se imprimira el 5 y luego cambia el valor a 6
        printf("%d\n",++i);//teniendo el valor de 6 al tener en el prefijo el ++ se sumara 1 antes de poder imprimirlo asi que sale 6+1 que da 7
        ///// 4
        a = 5, b = 2;
        float r = a / b;//se declara la variable como flotante pero como "a" y "b" son enteros a l hora de que se operan no puede quedar decimales asi que se redondea al numero entero
        printf("%.2f\n", r);// imprime 2.00 porque se trabajan datos tipo entero, asi que se imprime 2.00 en lugar de 2.50 porque redondea hacia el numero anterior
        //// ejercicio 5
         x = 5, y = 3;// se le agrego espacios entre las declaraciones de variables por estilo y mejorar la redaccion
        if(x>y){
            printf("x es mayor\n");//le agregue el \n porque sino pondria el "fin" justo al lado de "x es mayor"
        }// se le agregaron llaves por buena practica y estilo
        else{
            printf("y es mayor");
        }// otra vez poe buena practica se le agregaron llaves
        printf("fin");//se agrego identacion para mejor entendimiento del codigo y que el "fin" salga del else
        return 0;
    }