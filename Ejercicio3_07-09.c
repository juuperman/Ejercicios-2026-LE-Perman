#include <stdio.h>

int main() {
    int cantidad;
    int vector[100];
    int posicion;
    char seguir = 's';
   
    printf("Ingrese la cantidad de datos del vector: ");
    scanf("%d", &cantidad);
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
   
    while (seguir == 's') {
        printf("Ingrese la posicion del dato que quiere consultar (1-%d): ", cantidad);
        scanf("%d", &posicion);
        if (posicion >= 1 && posicion <= cantidad) {
            printf("El dato en la posicion %d es: %d\n",
                   posicion, vector[posicion - 1]);
        }
        else {
            printf("Posicion no permitida \n");
        }
        printf("¿Querés consultar otro dato? Si quiere, ingrese s, de no ser así, ingrese n: ");
        scanf(" %c", &seguir);
    }
    printf("Programa finalizado \n");
    return 0;
}
