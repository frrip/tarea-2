/*jimenez martinez fernanda 
tarea 2
precio del ticket del ferrocarril*/

#include <stdio.h>

int main()
{
    float distancia, distanciaTotal, precio;
    int dias;

    printf("Ingresa la distancia de ida en km: ");
    scanf("%f", &distancia);

    printf("Ingresa los dias de estancia: ");
    scanf("%d", &dias);

    distanciaTotal = distancia * 2;

    precio = distanciaTotal * 0.23;

    if (dias > 7 && distanciaTotal > 800) {
        precio = precio * 0.70;
    }

    printf("El precio del ticket es: %.2f\n", precio);

    return 0;
}
