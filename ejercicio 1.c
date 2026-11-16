/* jimenez martinez fernanda
tarea 2, ejercicio 1
suma, resta y multiplicacion*/

#include<stdio.h>

int main()
{
   float A, B;
   float suma, resta, multiplicacion;

   printf("ingresa el primer numero:");
   scanf("%f", &A);
  
   printf("ingresa el segundo numero");
   scanf("%f", &B);

   suma = A + B;
   resta = A - B;
   multiplicacion = A * B;

   printf("La suma es %f\n", suma);
   printf("La resta es %f\n", resta);
   printf("la multiplicacion es %f\n", multiplicacion);

  return 0;
}


