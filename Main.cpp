#include "ejercicios.h"

int main()
{
    int selectedExercise;

    setlocale(LC_ALL, "spanish");

    while (true)
    {
        system("cls");

        cout << "MENÚ DE EJERCICIOS" << endl << endl;
        cout << "Elige el ejercicio al que quieres acceder:" << endl << endl;

        cout << "1: Guess My Number" << endl;

        cout << endl;

        cout << "0: Salir." << endl << endl;

        cout << endl;
        cin >> selectedExercise;

        system("cls");

        switch (selectedExercise)
        {
        case(1):
            guessMyNumber();
            break;

        default:
            exit(NULL);
            break;
        }
    }
}