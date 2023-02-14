// Main.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");

    const std::string SMALLER_NUMBER_LESS_THAN_FIVE = "Tu n�mero es alto pero demasiado cerca";
    const std::string SMALLER_NUMBER_MORE_THAN_FIVE = "Tu n�mero es alto";
    const std::string BIGGER_NUMBER_LESS_THAN_FIVE = "Tu n�mero es bajo pero demasiado cerca.";
    const std::string BIGGER_NUMBER_MORE_THAN_FIVE = "Tu N�mero es bajo.";

    bool playing;
    int numberToGuess;
    int playerGuess;

    srand(time(0));

    do
    {

        numberToGuess = (rand() % 99) + 1;

        std::cout << "BIENVENIDO A GUESS MY NUMBER" << std::endl << std::endl;
        std::cout << "Se ha generado un n�mero aleatorio entre 1 y 100. En este programa, puedes ingresar un n�mero y te dir� si adivinaste de manera correcta o qu� tan cerca est�s del n�mero generado." << std::endl;

        do
        {
            std::cout << std::endl;
            std::cout << "Ingresa el n�mero a adivinar: ";
            std::cin >> playerGuess;
            std::cout << std::endl;

            if (playerGuess > numberToGuess && (playerGuess - numberToGuess) <= 5)
            {
                std::cout << SMALLER_NUMBER_LESS_THAN_FIVE;
            }

            if (playerGuess > numberToGuess && (playerGuess - numberToGuess) > 5)
            {
                std::cout << SMALLER_NUMBER_MORE_THAN_FIVE;
            }

            if (playerGuess < numberToGuess && (numberToGuess - playerGuess) <= 5)
            {
                std::cout << BIGGER_NUMBER_LESS_THAN_FIVE;
            }

            if (playerGuess < numberToGuess && (numberToGuess - playerGuess) > 5)
            {
                std::cout << BIGGER_NUMBER_MORE_THAN_FIVE;
            }

        } while (playerGuess != numberToGuess);

        system("cls");

        std::cout << "�HAZ ADIVINADO EL N�MERO GENERADO!" << std::endl << std::endl;
        std::cout << "El n�mero generado era " << numberToGuess << "." << std::endl << std::endl;
        std::cout << "�Quieres seguir jugando?" << std::endl << "0: No" << std::endl << "1: S�" << std::endl;
        std::cin >> playing;

        system("cls");

    } while (playing);
}