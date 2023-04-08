#include <stdio.h>

int main()
{
    float altura,base,area;

    printf("Introduzca la base:");
    scanf("%f",&base);
    printf("Introduzca la altura:");
    scanf("%f",&altura);

    area = base * altura/2;

    printf("El area del triangulo es: %.2f", area);

    return 0;
}
