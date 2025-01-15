// 1. HELLO3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Бібліотека вводу і виводу
#include <Windows.h> // Бібліотека мов

int main() // тіло програми
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    char i[21]; //символьна змінна з масивом
    char m[21]; //символьна змінна з масивом
    float v; //символьна змінна з масивом
    std::cout << "Напиши Своє ім'я, будь ласка." << std::endl; //output
    std::cin.getline(i, 21); //вводимо відповідь
    std::cout << "Вкажи свій вік" << std::endl; //output
    std::cin >> v; //вводимо відповідь
    std::cin.ignore();
    std::cout << "Де навчаєшся?" << std::endl; //output
    std::cin.getline(m, 21); //вводимо відповідь
    std::cout << "Так і запишемо..." << std::endl; //output
    std::cout << "Звати " << i << "." << std::endl; //output виводимо змінну
    std::cout << "Тобі " << v << " років." << std::endl; //output виводимо змінну
    std::cout << m << " - це гарне місце для навчання." << std::endl; //output виводимо змінну
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
