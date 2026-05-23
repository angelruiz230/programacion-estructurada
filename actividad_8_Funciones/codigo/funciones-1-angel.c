#include<stdio.h>
void capturar(int v[], int n);
void mostrar(int v[], int n);
int filtrado(int origen[], int n, FILE *f);
int main()
{
    int a[6];
    int n=6;
    capturar(a,n);
    mostrar(a,n);
    FILE *f;
    f = fopen("resultado.txt", "w");
    filtrado(a,n,f);
    fclose(f);
    return 0;
}
void capturar(int v[],int n)
{
    printf("dame un arreglo de 6 numeros:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
}
int filtrado(int origen[], int n,FILE*f)
{
    printf("\ndespues de filtrado:\n");
    for(int i=0;i<n;i++)
    {
        if(origen[i] % 2 != 0)
        {
            printf("%d ", origen[i]);
            fprintf(f,"%d ", origen[i]);
        }
        else{
            printf("- ");
            fprintf(f,"- ");

        }
    }
    return 1;
}

void mostrar(int v[], int n)
{
    printf("tu arreglo original:\n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
}