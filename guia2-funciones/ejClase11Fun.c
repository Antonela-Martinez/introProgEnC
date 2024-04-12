/*Realizar un algoritmo en pseudoc�digo que permita resolver el siguiente problema:
Se leen un conjunto de N n�meros enteros. Se pide calcular el promedio de los n�meros
que se encuentran entre un valor A y otro B.
Ej: A=3 , B=6

Conjunto = 2, 4, 5, 7, 3, 5, 1, 0
Promedio = 4,25
Cantidad de elementos que est�n entre A y B = 4

Desarrollar una funci�n que tome como par�metros los valores A y B y retorne el
promedio de los elementos que est�n en el rango.*/
///IMPLEMENTAR FUNCION PARA SUMAR DOS VARIABLES

void calcula (int a, int b, int *promedio);


void main ()
{
    int a, b, prom=0;
    printf("\nIngrese los valores de A y B\n");
    scanf("%d%d", &a, &b);

    calcula (a, b, &prom);
    printf("\nEl promedoo de los numeros que estan entre A y B es : %d\n", prom);

}



void calcula (int a, int b, int *promedio)
{
    int i, N, nro, suma=0,cant=0;
    printf ("\nIngrese la cantidad de elementos: ");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &nro);
        if (nro>=a && nro<=b)
        {
            cant++;
            suma=suma+nro;
        }
    }

    *promedio=suma/cant;
}
