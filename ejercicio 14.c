/* jimenez martinez fernanda 
tarea 2
contar cuantas veces aparece el mismo numero en un arreglo*/

#include <stdio.h>

int main() 
{
    int arreglo[100];
    int N, numero, contador = 0;
    int i;

    printf("Ingresa la cantidad de elementos: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingresa el numero que deseas buscar: ");
    scanf("%d", &numero);

    for (i = 0; i < N; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    printf("El numero aparece %d veces\n", contador);

    return 0;
}
