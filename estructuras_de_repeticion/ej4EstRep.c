/*Ejercicio 4
Escribir un programa en C que permita ingresar las temperaturas m�ximas y m�nimas
de cada d�a del mes de enero y mostrar por pantalla las fechas en que se produjeron
las m�ximas y las m�nimas absolutas del mes y los valores de las mismas.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max, min,i,tempMax=0,tempMin=50;

    for (i=0; i<3;i++)
        {
            printf("Ingrese temperatura maxima y minima del dia: %d\n", i+1);
            scanf("%d%d",&max,&min);
            if (max>tempMax)
                tempMax=max;
            if(min<tempMin)
                tempMin=min;

        }

        printf("Temperatura maxima del mes de enero:%d\n",tempMax);
        printf("Temperatura minima del mes de enero: %d\n",tempMin);

    return 0;
}
