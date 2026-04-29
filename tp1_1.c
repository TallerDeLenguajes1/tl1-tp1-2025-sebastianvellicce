#include<stdio.h>

int main(){
    float numero=3.14159265, *p_numero;
    p_numero=&numero;
    printf("Hola mundo!\n");
    printf("Contenido del puntero: %f\n",*p_numero);
    printf("Direccion almacenada por el puntero: %p\n",p_numero);
    printf("Direccion de memoria de la variable: %p\n",&numero);
    printf("Direccion de memoria del puntero: %p\n",&p_numero);
    printf("Tamanio de la variable: %zu bytes\n",sizeof(numero));
    return 0;
}