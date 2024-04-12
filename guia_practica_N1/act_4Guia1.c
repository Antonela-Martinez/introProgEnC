#include <stdio.h>
#include <stdlib.h>

//MOSTRAR MEDIDAS
/*Escribir un programa para convertir una medida dada en pies a sus equivalentes en: Yardas,
Pulgadas, Centímetros, Metros.
1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2,54 Cm
Leer el número de pies e imprimir el número de yardas, pulgadas, centímetros y metros.
*/
int main ()
{
  int pie, yarda, pulgada, centimetros, metros;
  printf("Ingrese su medida en pies:");
  scanf("%d", &pie);
  yarda= pie/3;
  pulgada= pie*12;
  centimetros= pulgada*2,54;
  metros= centimetros/100;
  printf("Evalen a:\n   %d yardas  \n   %d pulgada \n   %d centimetros \n   %d metros", yarda, pulgada, centimetros, metros);
}
