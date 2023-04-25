#include <stdio.h>

/*Hacer un programa en C, que pida un número del 1 al 5 y diga si es primo o no.*/

int main()
{
    int num, i, primo = 1;
    printf("Ingresa un numero del 1 al 5: ");
    scanf("%d", &num);
    //!Finaliza proceso si el numero es menor que 1 y mayor que 5
    if (num < 1 || num > 5)
    {
        printf("El numero debe estar entre 1 y 5.\n");
        return 0;
    }
    //*Se verifica el numero sin contar el 1 ni el mismo numero(num)
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
        }
    }

    if (primo > 0 && num > 1)
    {
        printf("El numero %d es primo.\n", num);
    }
    else
    {
        printf("El numero %d no es primo.\n", num);
    }

    return 0;
}