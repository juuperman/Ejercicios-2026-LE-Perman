#include <stdio.h>
int cantidad;

void comparar(int vector1[], int vector2[], int cantidad) {
    int max_valor = vector1[0];
    int num_vector = 1;
    for (int i = 0; i < cantidad; i++) {
        if (vector1[i] > max_valor) {
            max_valor = vector1[i];
            num_vector = 1;
        }
        if (vector2[i] > max_valor) {
            max_valor = vector2[i];
            num_vector = 2;
        }
    }
    printf("El valor mas grande entre ambos vectores es: %d (pertenece al vector %d)\n", max_valor, num_vector);
}
int main() {
    printf("Ingrese la cantidad de valores para el vector: ");
    scanf("%d", &cantidad);
    int vector1[cantidad];
    int vector2[cantidad];

    printf("Ingrese los valores del vector 1:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("Ingrese los valores del vector 2:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    printf("A continuacion, haremos la comparacion:\n");
    comparar(vector1, vector2, cantidad);
    return 0;
}
