/*1. Desarrollar un programa que permita leer dos n�meros A y B, y ordenarlos de menor a
mayor, si es el caso.
Utilizar una funci�n que reciba como par�metros los dos n�meros y de ser el caso
devuelva los valores intercambiados.*/
#include<stdio.h>
#include<stdlib.h>

///MOSTRAR DOS NUMEROS ORDENADOS
void intercambio(int *x,int *y);

int main()

{
    int a, b;
    printf("ingrese dos numeros ");
    scanf("%d%d", &a,&b);

    intercambio(&a,&b);
    printf("\nLos numeros ordenados son %d y %d.\n", a, b);
    return 0;
}
void intercambio(int *x,int *y)
{
   int auxiliar=0;

   if (*x>*y)
   {
    auxiliar=*x;
    *x=*y;
    *y=auxiliar;
   }
   else
    printf("\nEstan ordenados... %d, %d.", *x, *y);
}
