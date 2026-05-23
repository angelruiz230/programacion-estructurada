#include<stdio.h>

void mostrarmatriz(int m[2][3]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matriz[2][3]={{1,2,3},{4,5,6}};
    mostrarmatriz(matriz);
    return 0;
}