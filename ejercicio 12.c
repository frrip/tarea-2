/* jimenez martinez fernanda
tarea 2
producto de los primeros n numeros naturales*/

#include <stdio.h>

int main() 
{
    int N, i;
    unsigned long long producto = 1;

    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        producto = producto * i;
    }

    printf("El producto es: %llu\n", producto);

    return 0;
}
