#include <stdio.h>
/* Hacer un programa para un salario bruto hasta de s/. 800.00 tiene
una retención del 5%. para un salario bruto entre s/. 800.00 a
s/. 1,500.00 el porcentaje de retención es del 10%, pero un salario
bruto mayor a s/. 1,500.00. el porcentaje de retención es del 25%.
obtener el salario bruto, el valor de retención y el salario neto */
int main()
{
    float salario_bruto, retencion, salario_neto;

    printf("Ingrese el salario bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 800.0)
    {
        retencion = salario_bruto * 0.05;
    }
    else if (salario_bruto <= 1500.0)
    {
        retencion = salario_bruto * 0.1;
    }
    else
    {
        retencion = salario_bruto * 0.25;
    }

    salario_neto = salario_bruto - retencion;

    printf("Salario bruto: S/. %.2f\n", salario_bruto);
    printf("Retencion: S/. %.2f\n", retencion);
    printf("Salario neto: S/. %.2f", salario_neto);

    return 0;
}
