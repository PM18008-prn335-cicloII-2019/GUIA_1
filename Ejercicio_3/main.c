
#include <stdio.h>
#include <math.h>




int main() {

    int tamanio;
    float media=0;
    float varianza;
    float desv;
    
    printf("Ingrese el tamaño del vector:\n");
    scanf("%i", &tamanio);
    
    float vector[tamanio];
    
    for(int i=0; i<tamanio; i++){
        printf("Ingrese valor de la posicion: %i \n", i+1);
        scanf("%f", &vector[i]);
    }
    
    //calcular la media
    for(int i=0; i<tamanio; i++){
        media=media+vector[i];
    }
    
    media=media/tamanio;
    
    printf("La media es: %f", media);
    
    //calcular la varianza
    for(int i=0; i<tamanio; i++){
        varianza+=powf(vector[i]-media,2);
        
    }
    
    varianza=varianza/tamanio;
    printf("\nLa varianza es: %f", varianza);
    
    //calcular la desv. tipica
    desv=sqrtf(varianza);
    printf("\nLa desv. tipica es: %f", desv);
    
    return 0;
}

