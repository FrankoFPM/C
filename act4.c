#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, promedio;
    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;
    printf("El promedio de las notas es: %.2f", promedio);
    return 0;
}
