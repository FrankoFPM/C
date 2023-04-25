#include <stdio.h>
/* Hacer un programa en C, que nos permita ingresar el nombre,
apellido y las 3 notas de un alumno, si su promedio es mayor a
10.5 nos deme mostrar el su apellido y el mensaje de aprobado,
caso contrario nos debe mostrar su nombre y el mensaje de desaprobado. */
int main()
{
    char nom[30], apellido[30];
    int n1, n2, n3;
    float promedio;

    printf("Ingrese nombre del alumno: ");
    scanf("%s", &nom);
    printf("Ingrese apellido del alumno: ");
    scanf("%s", &apellido);

    printf("Ingrese la primera nota del alumno: ");
    scanf("%d", &n1);
    printf("Ingrese la segunda nota del alumno: ");
    scanf("%d", &n2);
    printf("Ingrese la tercera nota del alumno: ");
    scanf("%d", &n3);

    promedio = ((float)n1+n2+n3)/3;

    (promedio > 10.5) ? printf("El alumno %s esta aprobado con %.2f",apellido, promedio) : printf("El alumno %s esta desaprobado con %.2f",nom, promedio);

    return 0;
}
