/*jimenez martinez fernanda 
tarea 2
tabla de multiplicar*/

#include <stdio.h>

int main()
{
    int N, i;

    printf("Ingresa un numero entero: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
