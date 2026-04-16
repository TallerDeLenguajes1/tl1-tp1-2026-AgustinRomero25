// codigo_roto.c
#include <stdio.h> //faltaba incluir la librería

void duplicar_numero(int* numero)//recibe un puntero hacia el valor 
{
    *numero = *numero * 2;
}

int main() 
{
    int valor1;
    int valor2;
    int* p_valor1 = &valor1; //creo puntero hacia valor1

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1); //este no guardaba el valor en la dirección de memoria

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2; //faltaba ; aquí
    printf("La suma es: %d\n", suma);

    duplicar_numero(p_valor1); //aquí mando el puntero hacia valor1 
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0;
}