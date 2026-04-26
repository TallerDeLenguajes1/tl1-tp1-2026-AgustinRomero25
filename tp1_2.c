#include <stdio.h>

int devuelveCuadrado(int num)
{
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

void devuelveCuadradoVoid (int* num)
{
    *num = (*num) * (*num);
}

int main ()
{
    int num = 8;
    int* p_num = &num;

    devuelveCuadrado(num);
    devuelveCuadradoVoid(p_num);

    printf("el contenido de la variable es: %d\n", *p_num);
    printf("la dirección de la variable es: %d\n", p_num);

    return 0;
}