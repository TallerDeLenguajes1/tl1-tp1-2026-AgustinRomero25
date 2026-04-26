#include <stdio.h>

int main ()
{
    char holaMundo [10] = "hola mundo";
    char *puntero;
    puntero = holaMundo;

    printf("El contenido del puntero es %c\n", *puntero);
    printf("La dirección almacenada por el puntero es %d\n", puntero);
    printf("La dirección de memoria de la variable es %d\n", &holaMundo);
    printf("La dirección de memoria del puntero es %d\n", &puntero);
    printf("el tamaño de memoria utilizado por la variable es de %d bytes.\n", sizeof(holaMundo));

    return 0;
}