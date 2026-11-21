/* jimenez martinez fernanda 
tarea 2
aumento de sueldo*/

#include <stdio.h>

int main() {
    float sueldo, aumento;

    printf("Ingresa el sueldo: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) {
        aumento = sueldo * 1.15;
    } else {
        aumento = sueldo * 1.12;
    }

    printf("El sueldo con aumento es: %.2f\n", aumento);

    return 0;
}
