//prototipos
int factoriales (int nro);

//funcion principal
int main ()
{
   int x=0, nro;
   printf("Ingrese un numero\n");
   scanf("%d", &nro);
   x=factoriales(nro);
   printf("\nEl factorial de %d es %d", nro,x);
   return 0;
}

//declaracion funcion
int factoriales (int nro)
{
  int fac=1, i;
  for (i=1;i<nro;i++)
    fac=fac * i;

  return fac;
}
