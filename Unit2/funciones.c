#include <stdio.h>
int suma_numeros(int a,int b){
    int resultado;
    resultado = a + b;
    return resultado;
}

void multiplica_numeros(int* a, int* b){
    *b = *b * 2;
    return;
}

int main(int argc, char**argv){
    int a = 5;
    int b = 20;

    printf("Suma de 5 + 20 = %d\n",suma_numeros(a, b)); 
    multiplica_numeros(&a,&b);
    printf("La multiplicacion de 5 x 1 y 20 x 2 es:\n%d y %d\n",a,b);
}