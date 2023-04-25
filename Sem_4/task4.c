#include <stdio.h>
/* Hacer un programa en C, que pida un número y diga si es mayor de 100 */
int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    (num > 100) ? printf("El numero %d es mayor a 100", num) : printf("El numero %d no es mayor a 100", num);

    return 0;
}
