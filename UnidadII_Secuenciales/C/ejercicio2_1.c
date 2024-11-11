#include <stdio.h>

int main() {
    // Declaración de variables de tipo float para almacenar
    float base, altura, resp;

    // Mensaje inicial del programa
    printf("2.1 Calcular el área de un triangulo.!\n");
    printf("---------------------------------------\n");
    
    // Solicita al usuario ingresar el valor de la base
    printf("Ingresar el valor de base: ");
    scanf("%f",&base); // Lee el valor ingresado y lo alacemna en la variable "base"
    printf("Ingresar el valor de altura: ");
    scanf("%f",&altura); // Lee el valor ingresado y lo alacemna en la variable "altura"

    // Calcula el área del trángulo usando la fórmula (base * altura)/2
    resp = (base * altura)/2;

    // Muestra el resultado del cálculo del área del triángulo
    printf("El area del triangulo es: %.2f\n", resp);
    
    return 0;
}
