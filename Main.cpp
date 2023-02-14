// Main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");

    const std::string SMALLER_NUMBER_LESS_THAN_FIVE = "Tu número es alto pero demasiado cerca";
    const std::string SMALLER_NUMBER_MORE_THAN_FIVE = "Tu número es alto";
    const std::string BIGGER_NUMBER_LESS_THAN_FIVE = "Tu número es bajo pero demasiado cerca.";
    const std::string BIGGER_NUMBER_MORE_THAN_FIVE = "Tu Número es bajo.";

    bool playing;
    int numberToGuess;
    int playerGuess;

    srand(time(0));

    do
    {

        numberToGuess = (rand() % 99) + 1;

        std::cout << "BIENVENIDO A GUESS MY NUMBER" << std::endl << std::endl;
        std::cout << "Se ha generado un número aleatorio entre 1 y 100. En este programa, puedes ingresar un número y te diré si adivinaste de manera correcta o qué tan cerca estás del número generado." << std::endl;

        do
        {
            std::cout << std::endl;
            std::cout << "Ingresa el número a adivinar: ";
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

        std::cout << "¡HAZ ADIVINADO EL NÚMERO GENERADO!" << std::endl << std::endl;
        std::cout << "El número generado era " << numberToGuess << "." << std::endl << std::endl;
        std::cout << "¿Quieres seguir jugando?" << std::endl << "0: No" << std::endl << "1: Sí" << std::endl;
        std::cin >> playing;

        system("cls");

    } while (playing);
}