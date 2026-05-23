#include<stdio.h>

int main()
{
  //estructura de un arreglo
  float temp1,temp2;
  float temp[24];
  int dummy;
  printf("dirrecion de mem de 2 flotantes: &temp1:%i,\n&temp1:%i!\n", &temp1, &temp2);
  printf("dirrecion de temp[24]:%i,\n",temp);
  printf("dirrecion de &temp[24]:%d\n",&temp);
  printf("dirrecion de &dummy:%d\n",&dummy);
  return 0;
}