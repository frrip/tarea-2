/* jimenez martinez fernanda 
tarea 2
suma de numeros enteros pares entre 10 y 50*/

#include <stdio.h>

int main() 
{
    int i, suma = 0;

    for (i = 10; i <= 50; i += 2) {
        suma = suma + i;
    }

    printf("La suma de los numeros pares es: %d\n", suma);

    return 0;
}
