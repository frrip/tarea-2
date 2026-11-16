/* jimenez martinez fernanda
tarea 2, ejercicio 1
area y circunferencia de un circulo*/

#include<stdio.h>
int main()

{
  float radio, area, circunferencia;
  float pi = 3.1416;

  printf("ingrese el radio del circulo: ");
  scanf("%f", &radio);

  area = pi * radio * radio; 
  circunferencia = 2 * pi * radio;

  printf("el area del circulo es: %f\n", area);
  printf("la circunferencio del circulo es: %f\n", circunferencia);

return 0;
}
 
