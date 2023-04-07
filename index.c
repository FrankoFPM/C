#include <stdio.h>

int main(){
    float altura_cm;
    float altura_pulgadas;
    float altura_pies;

    printf("Introduzca la altura en centímetros: ");
    scanf("%f", &altura_cm);

    altura_pulgadas = altura_cm / 2.54;
    altura_pies = altura_pulgadas / 12;

    printf("La altura es de %.2f pulgadas y %.2f pies.\n", altura_pulgadas, altura_pies);

    return 0;
}