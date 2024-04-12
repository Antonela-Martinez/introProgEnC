/*Calcular si un año es bisiesto: Es bisiesto si es divisible por 4 pro no por
100 exepto aquellos divisible por 400
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int anio=0;
    printf ("Introduzca el año: \n" );
    scanf ("%d",&anio);
    if ((anio%400==0) || (anio%4==0) && (anio%100!=0))
        printf ( "El anio %d es bisiesto \n",  anio);
    else
        printf ( "El anio %d NO es bisiesto \n", anio);
    return 0;
}
