#include <stdio.h>
#include <stdlib.h>

//EXPRESAR UN NUMERO DADO EN SEGUNDOS EN ... HORAS MINUTOS SEGUNDOS
/*Escribir un programa que convierta un número dado en segundos en su equivalente en Horas,
Minutos y Segundos.
Ejemplo: Segundos=4000, el programa muestra 1H: 6M: 40S.
*/
void main()
{
    int segundos, minutos, horas;
    printf("Ingrese SEGUNDOS \n");
    scanf("%d", &segundos);
    minutos=segundos/60;  // 66 minutos (resultado entero de la division
    segundos=segundos%60; // 40 segundos (resto de la division)
    horas=minutos/60;
    minutos=minutos%60;
    printf("%d HORAS, %d MINUTOS, %d SEGUNDOS", horas, minutos, segundos);
}
