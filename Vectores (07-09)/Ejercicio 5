#include <stdio.h>

#define x 10

int sumar(int vector[], int tam);

int main() {
    int vector[x];
    int hola;
    int suma;
    float promedio;
    
    printf("Ingrese 10 valores:\n");
    for (int i = 0; i < x; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < x - 1; i++) {
        for (int j = i + 1; j < x; j++) {
            if (vector[i] < vector[j]) {
                hola = vector[i];
                vector[i] = vector[j];
                vector[j] = hola;
            }
        }
    }

    printf("Vector ordenado de mayor a menor:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", vector[i]);
    }

    suma = sumar(vector, x);
    promedio = suma / x;

    printf("Suma de los elementos: %d", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}

int sumar(int vector[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += vector[i];
    }
    return suma;
}
