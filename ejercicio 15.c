/* jimenez martinez fernanda 
tarea 2 
contar positivos, negativos y nulos de un arreglo*/

#include <stdio.h>

int main() 
{
    int arreglo[100];
    int N, i;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Ingresa la cantidad de elementos: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0) {
            positivos++;
        }
        else if (arreglo[i] < 0) {
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
