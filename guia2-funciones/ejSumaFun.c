// IMPLEMENTAR FUNCION PARA SUMAR DOS VALORES

#include<stdio.h>
#include<stdlib.h>

char sumar(int a, int b, int *R);
void sumar1();

void main()
{
    int result=0, n1, n2;
    char x;
    printf("\nIngrese el valor de A y B ");
    scanf("%d%d", &n1, &n2);
    x=sumar(n1, n2, &result);
   // x=sumar(5,6,&result);
    printf("\nLa suma de A y B es: %d", result);
    printf("\nEl valor de retorno de la funcion SUMAR es: %c", x);

    printf("\nAhora ejecuto funcion SUMAR1\n");
    system("pause");
    sumar1();
   // return 0;
}

void sumar1()
{
    int x, y;
    printf("\nIngrese otros 2 valores...");
    scanf("%d%d",&x, &y);
    printf("\nLa suma de los dos valores es: %d", x+y);
}

char sumar(int a, int b, int *R)
{
    *R=a+b;
    return 'S';
}


