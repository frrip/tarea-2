/*jimenez martinez fernanda
tarea 2
tasa de nteres mensual*/

#include <stdio.h>

int main() {
    float capital, tasa, monto;

    printf("Ingresa la cantidad invertida: ");
    scanf("%f", &capital);

    printf("Ingresa la tasa de interes mensual: ");
    scanf("%f", &tasa);

    monto = capital + (capital * tasa / 100);

    printf("El monto al finalizar el mes es: %.2f\n", monto);

    return 0;
}
