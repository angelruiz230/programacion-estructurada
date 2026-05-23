#include<stdio.h>
int main()
{
    int carlos=10, jorge=2, angel, a;
    printf("tipos de operadores\n:");
    printf("jerarquia y operadores aritmeticos\n");
    angel=carlos*2-8/(7%3)+jorge;
    printf("%d\n", angel);
    printf("operadores relacionales\n");
    a=carlos<jorge;
    printf("%d\n",a);
    printf("ternario\n");
    angel=carlos-jorge?67:69;
    printf("%d\n",angel);
    printf("operadores de incremento y decremento\n");
    angel=10;
    //angel++
    printf("%d\n",angel++);
    //++angel
    printf("%d\n",++angel);
    //angel--
    printf("%d\n",angel--);
    //--angel
    printf("%d\n",--angel);
    printf("operadores logicos\n");
    a=carlos||jorge;
    printf("%d\n",a);
    a=carlos|jorge;
    printf("%d\n",a);
    
    return 0;
}