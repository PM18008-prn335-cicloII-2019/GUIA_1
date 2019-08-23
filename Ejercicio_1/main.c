
#include <stdio.h>


int main() {
    int tamanio;
    
    printf("Ingrese el tamaño del vector:\n");
    scanf("%i", &tamanio);
    
    int vector1[tamanio];
    int vector2[tamanio];
    
    for(int i=0; i<tamanio; i++){
        printf("Ingrese valor de la posicion: %i \n", i+1);
        scanf("%i", &vector1[i]);
    }
    
    for(int i=0; i<tamanio; i++){
        vector2[i]=vector1[i];
    }
    
    
    
    printf("Vector 1: \n");
    
    for(int i=0; i<tamanio; i++){
        printf("%i ", vector1[i]);
    }
    
    printf("\nVector 2: \n");
    
    for(int i=0; i<tamanio; i++){
        printf("%i ", vector2[i]);
    }
    
    return 0;
}

