#include <stdio.h>

/*1.	Se lee un conjunto de números positivos correspondientes a x
        (el último negativo). Evaluar la función:
        y = x + x/2 + 4
        Escribir el valor de x e y para cada caso.
        Utilizar una función para calcular el valor de y.*/


int calculaY(int x);

void main()
{
    int x,y;
    printf("Ingrese el valor de x: \n");
    scanf("%d", &x);
    while (x>0)
    {
        y=calculaY(x);
        printf("El valor de x es %d, el valor de y es %d", x, y);
        printf("\nIngrese otro valor para la variable x: ");
        scanf("%d",&x);
    }
}

int calculaY(int x)
{
    return (x + x/2 + 4);
}
