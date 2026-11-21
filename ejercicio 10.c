/* jimenez martinez fernanda
tarea 2
leer 100 numeros y contar positivos, negativos y nulos*/

#include <stdio.h>

int main() 
{
    int numero;
    int positivos = 0, negativos = 0, nulos = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        }
        else if (numero < 0) {
            negativos++;
        }
        else {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
