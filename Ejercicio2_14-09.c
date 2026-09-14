#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct Alumno alumnos[3];

    for (int i = 0; i < 3; i++) {
        printf("Ingrese datos del Alumno %d \n", i + 1);

        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Año: ");
        scanf("%d", &alumnos[i].año);

        printf("\n"); 
    }

    printf("Datos de los 3 alumnos:\n");

    for (int i = 0; i < 3; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("  Nombre: %s\n", alumnos[i].nombre);
        printf("  Edad:   %d años\n", alumnos[i].edad);
        printf("  Año:    %d° año\n", alumnos[i].año);
        printf("---------------------------------\n");
    }

    return 0;
}
