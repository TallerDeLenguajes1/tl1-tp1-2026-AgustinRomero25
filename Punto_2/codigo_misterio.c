#include <stdio.h>

void invertirNum(int *punt_numero) {
    int numeroTemporal = *punt_numero;
    int numeroAlReves = 0;
    while (numeroTemporal > 0) {
        numeroAlReves = (numeroAlReves * 10) + (numeroTemporal % 10);
        numeroTemporal = numeroTemporal / 10;
    }
    *punt_numero = numeroAlReves;
}

void dividirEnDos(int *punt_numero) {
    *punt_numero = *punt_numero / 2;
}

void sumaNumeros(int *punt_numero) {//suma cada digito al número que se ingresa como dato Ej: 452 + 4 + 5 + 2 
    int numeroTemporal = *punt_numero;
    int suma = 0;
    while (numeroTemporal > 0) {
        suma = suma + (numeroTemporal % 10);
        numeroTemporal = numeroTemporal / 10;
    }
    *punt_numero = *punt_numero + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertirNum(valor_referencia);
    dividirEnDos(valor_referencia);
    sumaNumeros(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}