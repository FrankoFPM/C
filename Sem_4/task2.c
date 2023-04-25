#include <stdio.h>
/* 2.pida 3 números y los muestre en pantalla de mayor a menor*/
int main()
{
    int numeros[3];
    int i, j, temp;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeros[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeros[1]);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &numeros[2]);

    // Ordenar el array de mayor a menor con Ordenamiento de burbuja
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2 - i; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Los numeros ordenados de mayor a menor son: %d, %d, %d", numeros[0], numeros[1], numeros[2]);

    return 0;
}
