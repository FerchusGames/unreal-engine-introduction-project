#include "ejercicios.h"

void guessMyNumber()
{
    const string SMALLER_NUMBER_LESS_THAN_FIVE = "Tu n�mero es alto pero demasiado cerca";
    const string SMALLER_NUMBER_MORE_THAN_FIVE = "Tu n�mero es alto";
    const string BIGGER_NUMBER_LESS_THAN_FIVE = "Tu n�mero es bajo pero demasiado cerca.";
    const string BIGGER_NUMBER_MORE_THAN_FIVE = "Tu N�mero es bajo.";

    bool playing;
    int numberToGuess;
    int playerGuess;

    srand(time(0));

    do
    {
        numberToGuess = (rand() % 99) + 1;

        cout << "BIENVENIDO A GUESS MY NUMBER" << endl << endl;
        cout << "Se ha generado un n�mero aleatorio entre 1 y 100. En este programa, puedes ingresar un n�mero y te dir� si adivinaste de manera correcta o qu� tan cerca est�s del n�mero generado." << endl;

        do
        {
            cout << endl;
            cout << "Ingresa el n�mero a adivinar: ";
            cin >> playerGuess;
            cout << endl;

            if (playerGuess > numberToGuess && (playerGuess - numberToGuess) <= 5)
            {
                cout << SMALLER_NUMBER_LESS_THAN_FIVE;
            }

            if (playerGuess > numberToGuess && (playerGuess - numberToGuess) > 5)
            {
                cout << SMALLER_NUMBER_MORE_THAN_FIVE;
            }

            if (playerGuess < numberToGuess && (numberToGuess - playerGuess) <= 5)
            {
                cout << BIGGER_NUMBER_LESS_THAN_FIVE;
            }

            if (playerGuess < numberToGuess && (numberToGuess - playerGuess) > 5)
            {
                cout << BIGGER_NUMBER_MORE_THAN_FIVE;
            }

        } while (playerGuess != numberToGuess);

        system("cls");

        cout << "�HAZ ADIVINADO EL N�MERO GENERADO!" << endl << endl;
        cout << "El n�mero generado era " << numberToGuess << "." << endl << endl;
        cout << "�Quieres seguir jugando?" << endl << "0: No" << endl << "1: S�" << endl << endl;
        cin >> playing;

        system("cls");

    } while (playing);
}