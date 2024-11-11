#include <iostream>

using namespace std;

int main() {
    // DECLARACIÓN de variables de tipo float para almacenar
    float base, altura, resp;

    // MENSAJE inicial del programa
    cout << "2.1 Calcular el área de un triángulo.\n";
    cout << "---------------------------------------\n";
    
    // Solicita al usuario INGRESAR el valor de la BASE
    cout << "Ingresar el valor de base: ";
    cin >> base; // LEE el valor ingresado y lo ALMACENA en la VARIABLE "base"
    
    // Solicita al usuario INGRESAR el valor de la ALTURA
    cout << "Ingresar el valor de altura: ";
    cin >> altura; // LEE el valor ingresado y lo ALMACENA en la VARIABLE "altura"

    // CALCULA el ÁREA del triángulo usando la fórmula (base * altura) / 2
    resp = (base * altura) / 2;

    // MUESTRA el RESULTADO del cálculo del ÁREA del triángulo
    cout << "El área del triángulo es: " << resp << "\n";
    
    return 0;
}