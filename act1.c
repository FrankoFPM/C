#include <stdio.h>

    struct Persona
    {
        char name[50];
        char apellidos[50];
        char codigo[11];
        int celular;
        char email[50];
    };

int main()
{
    struct Persona alumno = {"Franco", "P.M", "U123456789",987654321,"Franco@hotmail.com"};

    printf("Bienvenidos estudiantes al curso de Arquitectura de Computadoras \n");
    //Imprimir informacion
    printf("mi nombre es: %s\n",alumno.name);
    printf("mi apellido es: %s\n",alumno.apellidos);
    printf("mi codigo es: %s\n",alumno.codigo);
    printf("mi celular es: %d\n",alumno.celular);
    printf("mi Email es: %s\n",alumno.email);
    return 0;
}
