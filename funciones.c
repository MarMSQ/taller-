#include <stdio.h>
#include "funciones.h"

float leerVariable(char* mensaje) {
    float variable;
    printf("%s", mensaje);
    scanf("%f", &variable);
    return variable;
}
float calculointeres(float a, float b) {
    return (a * (b / 12))/100;
}

void Imprimirtabla(int a, float b, float c, float d){
    printf("%d\t%.3f\t%.3f\t\t%.3f\n", a, b, c, d);
}
float sumandoporsi(float a, float b){
    a += b;
    return a;       
}
float calcusuma(float a, float b, float c){
    float num;
    num= a+b+c;
    return num;
}

void impresionfinal(float montoinvertido, float interes_anual, float total){
    printf("El total de monto invertido es: %.2f\n", montoinvertido);
    printf("El total de interes anual recaudado es: %.2f\n", interes_anual);
    printf("El total es: %.2f\n", total);
}