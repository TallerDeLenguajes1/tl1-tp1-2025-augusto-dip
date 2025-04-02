#include<stdio.h>
float Cuadrado(float x);
void Cuadradov2(float x);
void mostrarDireccion(float x, float b);
void Invertir(float x, float b);
void orden(float x, float b);


int main (){
    float a,b,c,x;
    printf("Ingrese el primer numero del par : \n");
    scanf("%f",&x);
    printf("Ingrese el segundo numero del par : \n");
    scanf("%f",&b);
    a = Cuadrado(x);
    printf("%f \n",a);
    Cuadradov2(x);
    mostrarDireccion(x,b);
    Invertir(x,b);
    orden(x,b);
return 0;
}
// DECLARACION DE FUNCIONES //
float Cuadrado(float x){
    float resultado;
    resultado = x * x ;
return (resultado) ;
}

void Cuadradov2(float x){
    float resultado;
    resultado = x * x ;
    printf("%f \n",resultado);
}

void mostrarDireccion(float x, float b){
    printf("Contenido : %f, %f \n",x,b);
    printf("Direccion : %p %p \n",x,b);
}

void Invertir(float x, float b){
    float aux;
    aux = x;
    x = b;
    b = aux;
    printf("Variable invertida 1: %f \n",x);
    printf("Variable invertida 2: %f \n",b);
}

void orden(float x, float b){
    float aux;
    if (b < x) {
        aux = x;
        x = b;
        b = aux; 
    }
    printf("Variable ordenada 1: %f \n",x);
    printf("Variable ordenada 2: %f \n",b);
}
