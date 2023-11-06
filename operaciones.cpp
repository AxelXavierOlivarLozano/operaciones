//
//  operaciones.cpp
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//
#include <iostream>
#include <string>
using namespace std;

void operaNumeros() {
    // 1. Declaración de variables
    int num1, num2;
    char option;

    // 2. Leer 2 números por teclado
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // 3. Leer la opción - sin mostrar los mensajes
    cout << "Enter the operation (S for sum, R for subtraction, M for multiplication): ";
    cin >> option;

    // Determinar la opción elegida y llevar a cabo la operación aritmética, para
    // desplegar el resultado
    switch (option) {
        case 'S':
        case 's':
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case 'R':
        case 'r':
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case 'M':
        case 'm':
            cout << "Product: " << num1 * num2 << endl;
            break;
        default:
            cout << "Opción incorrecta." << endl;
    }
}

int main() {
    operaNumeros();
    return 0;
}



