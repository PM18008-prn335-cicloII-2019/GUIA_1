
#include <stdio.h>


int main() {

    int tamanio;
    int posicion;

    printf("Ingrese el tamaño del vector:\n");
    scanf("%i", &tamanio);
    
    int vector[tamanio];
    
    for(int i=0; i<tamanio; i++){
        printf("Ingrese valor de la posicion: %i \n", i+1);
        scanf("%i", &vector[i]);
    }
    
    printf("\nVector: \n");
    
    for(int i=0; i<tamanio; i++){
        printf("%i ", vector[i]);
    }
    
    printf("\nIngrese la posicion que desea borrar:\n");
    scanf("%i", &posicion);
    
    vector[posicion-1]=0;
    
    printf("\nVector: \n");
    
    for(int i=0; i<tamanio; i++){
        printf("%i ", vector[i]);
    }
    
    return 0;
}

