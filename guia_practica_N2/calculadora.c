/*ESTRUCTURAS DE DECISION

Realice un programa en C que simule una calculadora, de tal forma que:
• Si el usuario introduce 1, sume dos números.
• Si el usuario introduce 2, reste dos números.
• Si el usuario introduce 3, multiplique dos números.
• Si el usuario introduce 4, divida dos números (evaluar que el segundo operando no sea 0)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int num1, num2, opcion, suma=0,resta=0, mult=0;
    float div=0;
  do{

    printf("\n\vIngrese 2 numeros\n");
    scanf("%d %d",&num1,&num2);
    printf("Elija la opcion que quiera realizar: \n\t1-SUMA\n\t2-RESTA\n\t3-MULTIPLICACION\n\t4-DIVISION\n\t5-SALIR\n");
    scanf("%d",&opcion);
    system("cls");
    switch(opcion)
    {
    case 1:

            suma=num1+num2;
            printf("Resultado de la suma es: %d\n",suma);
            system("pause");
            break;

    case 2:
            resta=num1-num2;
            printf("Resultado de la resta es:%d\n",resta);
            system("pause");
            break;
    case 3:

                if (num2==0||num1==0)
                {
                  printf("Numero ingresado incorrecto\n");
                  system("pause");
                  break;
                }
                else
                    { mult=(num1*num2);
                      printf("Resultado de la muliplicacion:%d\n",mult);
                      system("pause");
                      break;}



    case 4:
             if (num2==0||num1==0)
                {
                  printf("Numero ingresado incorrecto\n");
                  system("pause");
                  break;
                }
                else
                    { div=(num1/num2);
                      printf("Resultado de la muliplicacion:%.2f\n\n",div);
                      system("pause");
                      break;}

    case 5:
            printf("\nHa finalizado el programa\n");

            break;
    default:
            printf("opcion incorrecta\n");
            break;
    }
    system("cls");
 }while(opcion!=5);
}
