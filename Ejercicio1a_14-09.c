#include <stdio.h>

struct Alumno {
    char nombre[50]; 
    int edad;        
    int año;       
};

int main() {
    struct Alumno alumno1;

    printf("Escribí el nombre: ");
    scanf("%s", alumno1.nombre);

    printf("Escribí la edad: ");
    scanf("%d", &alumno1.edad);  

    printf("Escribí el año: ");
    scanf("%d", &alumno1.año); 

    printf("\n--- Ficha Completa ---\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Edad: %d\n", alumno1.edad);
    printf("Año: %d\n", alumno1.año);

    return 0;
}
