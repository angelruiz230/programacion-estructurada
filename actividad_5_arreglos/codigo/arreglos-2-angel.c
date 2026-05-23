 #include<stdio.h>

int main()
{
    int N=4;//tamaño de arreglo
    float temp[N];//arreglo
    /*temp[0]=20.57;
    temp[1]=19.4;
    */

     for(int i=0;i<N;i++)
    {
        printf("dame la %i temperatura:\n",i+1);
        scanf("%f",&temp[i]);
    }
    for(int i=0;i<N;i++)
    {
       printf("%f\n", temp[i]);
   // printf("%f", temp[1]);
    }


    return 0;
}