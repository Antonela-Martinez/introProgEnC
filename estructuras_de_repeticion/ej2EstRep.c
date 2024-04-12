/*Ejercicio 2
Escriba un programa en C que escriba la suma de los N primeros números impares.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, i=0, suma=0;
    printf("Ingrese un numero\n");
    scanf("%d",&num);

    do{
       i++;
       if(i%2==1)
       suma+=i;
  }
    while(i<num);
   printf("La numa e los numeros impares es:%d",suma);

   //////////////////////////////////////////////////////////////WHILE
   i=0;
   suma=0;
    printf("Ingrese un numero\n");
    scanf("%d",&num);
   while(i<num)
   {
       i++;
       if(i%2==1)
       suma+=i;
   }
   printf("La numa e los numeros impares es:%d",suma);

   return 0;
}
