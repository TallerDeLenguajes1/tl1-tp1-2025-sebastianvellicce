#include <stdio.h>

void invertirDigitos(int *punteroNum) {
    int temp = *punteroNum;
    int numInvertido = 0;
    while (temp > 0) {
        numInvertido = (numInvertido * 10) + (temp % 10);
        temp = temp / 10;
    }
    *punteroNum = numInvertido;
}

void mitadEntera(int *punteroNum) {
    *punteroNum = *punteroNum / 2;
}

void sumarNumeroConDigitos(int *punteroNum) {
    int temp = *punteroNum;
    int sumaDigitos = 0;
    while (temp > 0) {
        sumaDigitos = sumaDigitos + (temp % 10);
        temp = temp / 10;
    }
    *punteroNum = *punteroNum + sumaDigitos;
}

void procesarNumero(int *punteroNum) {
    invertirDigitos(punteroNum);
    mitadEntera(punteroNum);
    sumarNumeroConDigitos(punteroNum);
}

int main() {
    int numero = 452;
    
    printf("El numero incial es: %d\n", numero);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesarNumero(&numero); //Lo que hace procesar Numero es invertir el numero, separar sus digitos y sumar el numero invertido con sus digitos.
    
    printf("Resultado final: %d.\nLo que este programa hizo es invertir el numero, luego dividimos en 2 al numero y por ultimo sumamos los digitos del resultado de la division entera.\n", numero);
    
    return 0;
}