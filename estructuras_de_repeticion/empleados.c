#include <stdio.h>
#include <stdlib.h>

int main()

{
char cat;
int sueldo_basico, N, empleado,contadorA=0,contadorB=0,contadorC=0,sumaTotal=0;
float sueldo_a_cobrar;

printf("Ingrese cantidad de empleados");
scanf("%d", &N);

//contadorA=0;
//contadorB=0;
//contadorC=0;
for(empleado=1;empleado<=N;empleado++){
printf( "ingrese su categoria\n ");fflush(stdin);
scanf("%c",&cat);
printf( "ingrese sueldo basico'\n");fflush(stdin);
scanf("%d",&sueldo_basico);


switch (cat) {
    case 'A': sueldo_a_cobrar = sueldo_basico +(sueldo_basico*0.2); contadorA++;break;
    case 'B': sueldo_a_cobrar = sueldo_basico +(sueldo_basico*0.1); contadorB++; break;
    case 'C': sueldo_a_cobrar = sueldo_basico +(sueldo_basico*0.05); contadorC++; break;
    case 'D': sueldo_a_cobrar = sueldo_basico; break;
    default: printf ("Categoria incorrecta");
}
sumaTotal=contadorA+contadorB+contadorC;
printf("Sueldo a cobrar: %.2f\n\n", sueldo_a_cobrar);
system("pause");

}
printf("Cantidad de empleados total con aumento: %d\n\n",sumaTotal);
printf("Cantidad de empleados de Categoria A: %d\n\n",contadorA);
printf("Cantidad de empleados de Categoria B: %d\n\n",contadorB);
printf("Cantidad de empleados de Categoria C: %d\n\n",contadorC);
return 0;
}
