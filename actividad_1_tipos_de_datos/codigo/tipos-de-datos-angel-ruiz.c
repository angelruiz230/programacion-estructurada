#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
//enteros
    int a = 67;
    unsigned int p = 9874;
    signed int x = -9;
    short r = 50;
    unsigned short t = 8000;
    long n = 9054;
    unsigned long kk = 6565626;
    long long h = 675895;
    unsigned long long yupi = 65913;//
    //flotantes
    float b = 6.7;
    double c = 3.141592;
    long double qu = 123.225L;//

    //caracteres
    char d = 'B';
    char g[11] = "hola mundo";
    signed char yo = -67;
    unsigned char nu = 100;

    printf("(tipo / direccion / dato)\n\n");
    printf("(int / %llu / %d)\n",(unsigned long long)&a,a);
    printf("(unsigned int / %llu / %u)\n",(unsigned long long)&p,p);
    printf("(signed int / %llu / %d)\n",(unsigned long long)&x,x);
    printf("(short / %llu / %d)\n",(unsigned long long)&r,r);
    printf("(unsigned short / %llu / %d)\n",(unsigned long long)&t,t);
    printf("(long / %llu / %ld)\n",(unsigned long long)&n,n);
    printf("(unsigned long / %llu / %lu)\n",(unsigned long long)&kk,kk);
    printf("(long long / %llu / %lld)\n",(unsigned long long)&h,h);
    printf("(unsigned long long / %llu / %llu)\n",(unsigned long long)&yupi,yupi);
    printf("(float / %llu / %f)\n",(unsigned long long)&b,b);
    printf("(double / %llu / %f)\n",(unsigned long long)&c,c);
    printf("(long double / %llu / %Lf)\n",(unsigned long long)&qu,qu);
    printf("(char / %llu / %c)\n",(unsigned long long)&d,d);
    printf("(cadena de caracter / %llu  / %s)\n",(unsigned long long)&g,g);
    printf("(signed char / %llu / %d)\n",(unsigned long long)&yo,yo);
    printf("(unsigned char / %llu / %u)\n",(unsigned long long)&nu,nu);

    printf("\n-----------------------------------------\n");
    return 0;
}