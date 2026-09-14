#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

 int main()
{
    struct Alumno alumno1 = {"Julieta Perman", 16, 5};

    printf("--- Datos del Alumno ---\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Edad:   %d años\n", alumno1.edad);
    printf("Año:    %d° año\n", alumno1.año);

    return 0;
}
