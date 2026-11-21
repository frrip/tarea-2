/* jimenez marinez fernanda
tarea 2
suma de los elementos de un arreglo*/

#include <stdio.h>

int main() 
{
    int arreglo[100];
    int N, i, suma = 0;

    printf("Ingresa la cantidad de elementos: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        suma = suma + arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
