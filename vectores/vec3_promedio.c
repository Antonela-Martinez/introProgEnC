///1. Escribir un programa que lea 10 números por teclado, los almacene en un array y muestre la media.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

float media(int V1[MAX],int N);

void main()
{
    int num,i;
    float M=0;
    int vec1[MAX];

    for (i=0; i<MAX;i++)
    {
    printf("ingrese elemento");
    scanf ("%d", &vec1[i]);
    }

    M=media(vec1,MAX);
    printf("\nla media de los elementos es:%.2f\n", M);
}

float media(int V1[MAX],int N)

{
  int i,suma=0;

  for (i=0; i<N;i++)
        suma+=V1[i];
        return suma/N;
}

