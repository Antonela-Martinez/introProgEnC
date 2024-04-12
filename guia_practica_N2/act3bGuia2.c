/*Resolver los siguientes problemas mediante programas en C.
a Escribir un programa que lea dos enteros que representan una fecha (mes y
día del mes) y escriba true si la fecha corresponde al día de navidad y false
de lo contrario.
b Ingresar tres valores decimales, calcular e imprimir el mínimo.
c Ingresar tres datos de tipo carácter (letras), escribirlos ordenados
alfabéticamente.
*/
#include<stdio.h>

int main()
{
    float n1,n2,n3,minimo;
    minimo=0;

  printf("\n\nIngrese 3 valores decimales\n");
  scanf("%f %f %f",n1,n2,n3);

  if (n1<n2 && n1<n3)
    printf("Minimo: %f",n1);
  else
    if(n2<n1&&n2<n3)
        printf("Minimo:%f",n2);
    else
        printf("Minimo:%f",n3);

    return 0;
}
