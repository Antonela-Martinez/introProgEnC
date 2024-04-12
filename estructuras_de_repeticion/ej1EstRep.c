/*Ejercicio 1
Realizar un programa en C, utilizando estructuras de repetición condicional
para resolver cada o de los siguientes problemas:
Nota: N y K son números naturales, ambas son variables de entrada.
∙ Mostrar por pantalla los 10 primeros números naturales.
∙ Mostrar por pantalla los N primeros números pares.
∙ Calcular y mostrar por pantalla la suma de los N primeros múltiplos de K. ∙
Mostrar por pantalla los números enteros que se encuentran comprendidos
en elintervalo [–K ... K] en orden ascendente y luego en orden descendente. ∙
Mostrar por pantalla los términos de la sucesión 1,3,6,10,15,21,28..... que
seanmenores al número K.
∙ Calcular el promedio de N números.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=0,suma=0;

    while(num<10)
    {
        num++;
        printf("lo primeros 10 numeros naturales son:%d\n",num);
        //system("pause");
        //suma+=num;
    }
system("pause");
system("cls");
//system("pause");
num=0;
    while(num<10)
    {
        num++;
        if(num%2==0)
            printf("numeros pares:%d\n",num);
    }
system("pause");
system("cls");
num=0;
suma=0;
int multiplo=0,n;
printf("ingrese un multiplo");
scanf("%d",&multiplo);

    while(num<10)
    {
        num++;
        n=multiplo*num;
        suma=suma+n;
        printf("suma.%d\n",suma);
    }
printf("La suma de los 10 primeros multiplos es:%d\n",suma);
system("pause");
system("cls");
int i=0;
printf("Ingrese un numero entero");
scanf("%d",&num);

while(i<num)
{
    i++;

    if(i==1)
        printf("[%d,",i);
    else
        if(i==num)
        printf("%d]",i);
        else
            printf("%d,",i);


}
i=0;
printf("\nIngrese el mismo numero en negativo\n");
scanf("%d",&num);
printf("\n");
while(i>num)
{
    i--;

    printf("%d",i);

}

float promedio=0;
i=0;
suma=0;
printf("\nIngrese un numero, con salida 0\n");
scanf("%d",&num);
while(num!=0)
{
    i++;
    suma=suma+num;
    promedio=suma/i;
    printf("ingrese unnumero:\n\t");
    scanf("%d",&num);
}
    printf("El promedio es:%.2f",promedio);
    return 0;
}
