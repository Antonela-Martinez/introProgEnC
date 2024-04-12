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
  int mes,dia;
  printf("Ingrese mes y dia en numero\n");
  scanf("%d%d",&mes,&dia);
if (mes>=1&&mes<=12&&dia>=1&&dia<=31)
    if(dia==25 && mes==12)
        printf("Hoy es navidad");
    else
        printf("Hoy no esnavidad");
else
    printf("Su fecha esta fuera de rango");

system("pause");
system("cls");


 return 0;
}
