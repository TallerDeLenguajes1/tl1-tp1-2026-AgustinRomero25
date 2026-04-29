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

void invertir (int* a, int* b)
{
    int a_temp;
    a_temp = *a;
    *a = *b;
    *b = a_temp;
}

void orden (int* a, int* b)
{
    if (*a > *b)
    {
        int a_temp;
        a_temp = *a;
        *a = *b;
        *b = a_temp;
    }
}

int main ()
{
    int num = 8;
    int* p_num = &num;

    devuelveCuadrado(num);
    devuelveCuadradoVoid(p_num);

    printf("el contenido de la variable es: %d\n", *p_num);
    printf("la dirección de la variable es: %d\n", p_num);

    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num2);
    printf("\n");

    printf("el primer numero ingresado es: %d\n", num1);
    printf("el segundo numero ingresado es: %d\n", num2);

    int* p_num1;
    int* p_num2;
    p_num1 = &num1;
    p_num2 = &num2;

    invertir (p_num1, p_num2);

    printf("el primer numero invertido es: %d\n", *p_num1);
    printf("el segundo numero invertido es: %d\n", *p_num2);

    orden (p_num1, p_num2);

    printf("el numero menor es: %d\n", *p_num1);
    printf("el segundo mayor es: %d\n", *p_num2);

    return 0;
}