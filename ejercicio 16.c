/* jimenez martinez fernanda 
tarea 2
almacenar e imprimir los primeros 100 numeros pares*/

#include <stdio.h>

int main() 
{
    int arreglo[100];
    int i;

    for (i = 0; i < 100; i++) {
        arreglo[i] = (i + 1) * 2;
    }

    printf("Los primeros 100 numeros pares son:\n");

    for (i = 0; i < 100; i++) {
        printf("%d\n", arreglo[i]);
    }

    return 0;
}
