/*jimenez martinez fernanda 
tarea 2 
numero divisor de otro*/

#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Ingresa dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 != 0 && num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    } 
    else if (num2 != 0 && num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    } 
    else {
        printf("Ninguno es divisor del otro\n");
    }

    return 0;
}
