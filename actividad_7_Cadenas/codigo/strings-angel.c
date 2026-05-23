#include<stdio.h>//angel fernando ruiz arias
#include<string.h>
int main()
{
    char nom[16]="antonio";
    char nom2[16];
    char nom3[16];
    char jugadores[3][20];
    char lista[3][20];
    int n=3;
    char noma[16]="antonio";
    char nomb[16]="angel";
    char nom4[16]="guadalupe";

    //uso de scanf para caracteres:
    /*scanf("%s", &nom2);
    printf("%s", nom2);*/

    //uso de fgets:
    fgets(nom3,sizeof(nom3), stdin);
    printf("%s\n", nom3);

    //uso de strcpy:
    strcpy(jugadores[0],"angel");
    strcpy(jugadores[1],"carlos");
    strcpy(jugadores[2],"cesar");

    //lista que usa fgets y lista con strlen:
    for(int i=0;i<n;i++)
    {
        fgets(lista[i],sizeof(lista[i]),stdin);
    }
    for(int j=0;j<n;j++)
    {
        printf("%s", lista[j]);
    }
    printf("\n");
    for(int k=0;k<n;k++)
    {
        int longitud=strlen(lista[k]);
        printf("\nla longitud de %s es de %d\n", lista[k], longitud);
    }

    //uso de strcat:
    strcat(nomb, "perez");
    printf("\n%s\n",nomb);

    //uso de strcmp:
    int ejemplo0=strcmp(nom,noma);
    int ejemplo1=strcmp(nom,nomb);
    int ejemplo2=strcmp(nom,nom4);
    printf("%d\n", ejemplo0);
    printf("%d\n",ejemplo1);
    printf("%d", ejemplo2);

    return 0;

}