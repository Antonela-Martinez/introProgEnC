///INTERCAMBIAR DOS VARIABLES
#include<stdio.h>
#include<stdlib.h>

void intercambio (int *a, int *b);

void main ()
{
    int a, b;
    printf("\nIngrese el valor de a y b ");
    scanf("%d %d", &a, &b);
    intercambio(&a, &b);
    printf("%d-%d", a, b);
}

void intercambio (int *a, int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
