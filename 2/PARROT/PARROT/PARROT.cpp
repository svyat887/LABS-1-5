// PARROT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Бібліотека вводу і виводу
#include <Windows.h> // Бібліотека мов
int main() // тіло програми
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    char scream[21]; // оголошуємо змінну символьного типу з масивом
    std::cout << "Я - Папага Петті! Скажи мені щось, і я це повторю. (Але не більше 20 символів, друже)\n"; // output
    std::cin.getline(scream, 21); // можемо ввести рядок тексту з декількох слів
    std::cout << "\"Кар-р-р-р--р-р-!!! " << scream << "\"" << std::endl; // output з нашою змінною
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
