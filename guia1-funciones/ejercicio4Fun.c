/*4. Escribir un programa en C que permita calcular la potencia de un número
mediante una función “potencia”.
Datos de entrada: nro, exponente (nroexponente)
Crear función, que reciba como parámetro nro y exponente, y retorne la
potencia.*/

#include<stdio.h>
#include<stdlib.h>
int potencia(int x,int y);
void main()
{
    int num, exp,resultado;
    printf("ingrese numero y exponente");
    scanf("%d%d",&num,&exp);

    resultado=potencia(num,exp);

    printf("La potencia de (%d)%d es:%d",num,exp,resultado);
}

int potencia(int x,int y)
{
    int i,pot=1;

    for(i=0;i<y;i++)
        pot=pot*x;

        return pot;
}
