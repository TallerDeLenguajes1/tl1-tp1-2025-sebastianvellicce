#include<stdio.h>

float cuadradoPorValor(int n){
    return (n*n);
}
void cuadradoPorReferencia(int *p_num){
    *p_num *=*p_num;
}

void mostrarDirrecYCont(int num){
    printf("c) Direccion de la variable: %p\n",&num);
    printf("Contenido de la variable: %d\n",num);
}

void Invertir( int *a, int *b){
    int aux;
    aux=*b;
    *b=*a;
    *a=aux;
}

void orden(int *a, int *b){
    int aux;

    if(*a>*b){
    aux=*b;
    *b=*a;
    *a=aux;
    }
}

int main(){
    int n,nCuadrado, a=6,b=7,c,d;

    printf("Ingrese un numero:\n");
    scanf("%d",&n);

    nCuadrado=cuadradoPorValor(n);
    printf("a) %d\n",nCuadrado);

    cuadradoPorReferencia(&n);
    printf("b) %d\n",n);

    mostrarDirrecYCont(n);
    printf("El valor de a = %d\nEl valor de b = %d",a,b);
    Invertir(&a,&b);
    printf("\nInvertimos:\na = %d\nEl valor de b = %d\n",a,b);

    printf("Ingrese dos numeros enteros:\n");
    scanf("%d",&c);
    scanf("%d",&d);

    orden(&c, &d);
    printf("Numeros ordenados: %d, %d\n",c,d);
    return 0;
}