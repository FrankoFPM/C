#include <stdio.h>

int main()
{
    int a,b,c,d,g;
    float f;

    a = 15;
    b = 10;

    c = a + b;
    d = a - b;
    f = (float)a / b;//conversion explicita
    g = a * b;

    printf("Resultado de la suma de %d y %d es %d\n",a,b,c);
    printf("Resultado de la resta de %d y %d es %d\n",a,b,d);
    printf("Resultado de la division de %d y %d es %.2f\n",a,b,f);//formato .2f para 2 decimales
    printf("Resultado de la multiplicacion de %d y %d es %d\n",a,b,g);
    return 0;
}
