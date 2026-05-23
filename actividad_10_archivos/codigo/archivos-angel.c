#include<stdio.h>
void mostrar(int v[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d",v[i]);
    }
    printf("\n");
}
void mostrar1(int x[3][3],FILE*f)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
            fprintf(f,"%d ",x[i][j]);

        }
            printf("\n");
            fprintf(f,"\n");
    }
    printf("\n");
}
void capturar(int m[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");
}
int diagonal(int g[3][3],FILE *f)
{
    printf("\nla suma de la diagonal principal de la matriz es:");
    fprintf(f,"\nla suma de la diagonal principal de la matriz es:");
    int suma=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                suma=suma+=g[i][j];
            }
        }
    }
    printf("%d",suma);
    fprintf(f,"%d",suma);

}
int main()
{
    int a[5]={1,2,3,4,5},p=5;
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int o[3][3];
    FILE *f;
    f=fopen("tablero.txt","a");
   // mostrar1(b);
    mostrar(a,p);
    capturar(o);
    mostrar1(o,f);
    diagonal(o,f);
    fprintf(f,"\n");

    fclose(f);

    return 0;
}