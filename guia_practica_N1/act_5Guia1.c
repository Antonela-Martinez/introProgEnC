#include<stdio.h>
//EJERCICIO 5... TERMINAR!!!
/*Construir un programa que al recibir como dato un número de 4 dígitos, genere una
impresión como la que se muestra a continuación (El número 6352):
6
3
5
2
*/
void main ()
{
  int nro, resto1=0, entero1=0, entero2=0,resto2=0, entero3=0,resto3=0;
  printf("Ingrese numero de 4 digitos: \n" ) ;
  scanf ("%d", &nro);
  resto1=nro%1000;
  entero1=nro/1000;

  resto2=resto1%100;
  entero2=resto1/100;

  resto3=resto2%10;
  entero3=resto2/10;

  printf("Entero 1: %d \nEntero 2: %d\nEntero 3: %d \nEntero 4: %d",entero1,entero2,entero3,resto3);
}
