/*3. Escribir un programa en C que invoque a una función que tenga un argumento
de tipo entero y devuelva la letra P si el número es positivo y la letra N si el
número es 0 o negativo.*/

#include<stdio.h>
#include<stdlib.h>

char calcular(int x);

void main()
{
    int num;
    char resultado;
    printf("ingrese numero");
    scanf("%d",&num);

    resultado=calcular(num);

    printf("El resultado es:%c",resultado);

}

char calcular(int x)
{
    if (x>0)
        return 'P';
    else
        if(x<=0)
            return 'N';

}



