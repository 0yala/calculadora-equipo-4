#include <iostream>
using namespace std;

// Funciones del miembro 1
void obtenerNumeros(double &numero1, double &numero2)
{
    // pedimos los datos al usuario en consola
    cout << "ingresa el primer numero: ";
    cin >> numero1;
    cout << "ingresa el segundo numero: ";
    cin >> numero2;
}

double suma(double numero1, double numero2)
{
    // regresamos el resultado de sumar ambos valores
    return numero1 + numero2;
}

double resta(double numero1, double numero2)
{
    // regresamos la resta
    return numero1 - numero2;
}

// Funciones del miembro 2
double multiplicacion(double numero1, double numero2)
{
    return numero1 * numero2;
}

double division(double numero1, double numero2)
{
    if (numero2 != 0){
        return numero1 / numero2;
    }
    return 0;
}

// Funcion del lider
void mostrarResultados(double resultado)
{
    cout << "El resultado es: " << resultado << endl;
}

int main()
{
    double numero1 = 0;
    double numero2 = 0;
    double resultado = 0;
    int opcion;

    cout << "CALCULADORA" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    obtenerNumeros(numero1, numero2);

    switch (opcion)
    {
        case 1:
            resultado = suma(numero1, numero2);
            break;

        case 2:
            resultado = resta(numero1, numero2);
            break;

        case 3:
            resultado = multiplicacion(numero1, numero2);
            break;

        case 4:
            resultado = division(numero1, numero2);
            break;

        default:
            cout << "Opcion no valida" << endl;
            return 0;
    }

    mostrarResultados(resultado);

    return 0;
}
