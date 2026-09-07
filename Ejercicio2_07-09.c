#include <stdio.h>
int vector [4];
int x,suma;
int main()
{
    for(x=0;x<4;x++){
        printf("Indique el numero a guardar: ");
        scanf("%d", &vector[x]);
        suma+=vector[x];
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
