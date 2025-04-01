#include <stdio.h>

int main (){
    float nota;
    float *p_nota;

    nota = 9.12;
    p_nota = &nota;

    printf("Valor de nota: %f\n", *p_nota);  
    printf("Direccion de memoria: %p\n", p_nota); 
    printf("Dirección de memoria de la variable: %p\n", &nota);  
    printf("Dirección de memoria del puntero.: %p\n", &p_nota);  
    printf("Tamaño de memoria utilizado por la variable: %d bytes\n",(int)sizeof(nota));
    printf("\nHola mundo\n");
    getchar(); 
    return 0;
}