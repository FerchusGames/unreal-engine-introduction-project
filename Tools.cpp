#include "ejercicios.h"

void cinIntSafeguard(int* inputNumber)
{
    while (cin.fail()) 
    {
        cin.clear(); // clear error flags
        cin.ignore(10000, '\n'); // discard input buffer
        cout << "Ingresa un número válido: ";
        cin >> *inputNumber;
    }
}