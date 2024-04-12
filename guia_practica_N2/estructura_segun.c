#include <stdio.h>
#include <stdlib.h>
//INGRESAR UN NUMERO Y MOSTRAR QUE DIA DE LA SEMANA ES
int main ()
{
  int nro_dia;
  printf("Ingrese dia de la semana: \n" ) ;
  scanf ("%d", &nro_dia);
  switch (nro_dia)  //(1)
  {
    case 1 :
        	printf("Hoy es Lunes");
            break;
    case 2 :
        	printf("Hoy es Martes");
            break;
    case 3 :
        	printf("Hoy es Miercoles");
            break;
    case 4 :
        	printf("Hoy es Jueves");
            break;
    case 5 :
        	printf("Hoy es Viernes");
            break;
    case 6 :
        	printf("Hoy es Sabado");
            break;
    case 7 :
        	printf("Hoy es Domingo");
            break;

    default: printf ("Número incorrecto\n") ;
  }
  return 0;
}
