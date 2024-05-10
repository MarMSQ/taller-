#include <stdio.h>
#include "funciones.h"


int main(int argc, char const *argv[]) {
    int tiempo, i;
    float monto, interes, ts, ta, mm, ti, tmi, ia;
    
    monto = leerVariable("Ingrese el monto: ");
    interes = leerVariable("Ingrese el interes anual: ");
    tiempo = (int)leerVariable("Ingrese el plazo (meses): ");
    
    ti = 0; 
    tmi = 0;
    ia = 0;


    printf("Mes\tInteres\tMonto mensual\tMonto total\n");  
    for (i = 1; i <= tiempo; i++) {
        ts = calculointeres(monto+ti, interes);
        ti = sumandoporsi(ti,ts);
        ia= sumandoporsi(ia,ti);
        mm = calcusuma(tmi,ia,monto);
        Imprimirtabla(i,ti,monto,mm);
        tmi= sumandoporsi(tmi,monto);
    }

impresionfinal(tmi, ia, mm);


    return 0;
}
