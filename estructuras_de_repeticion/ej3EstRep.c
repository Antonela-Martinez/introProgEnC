/*Ejercicio 3
Escriba un programa en C que permita calcular la potencia de x elevado a la y (xy).*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int potencia=1;
    while (potencia<1000)
    {
        printf("%d\n",potencia);
        potencia*=2;
    }


    return 0;
}
