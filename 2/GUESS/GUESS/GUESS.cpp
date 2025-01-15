// GUESS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Бібліотека вводу і виводу 
#include <iomanip>
#include<Windows.h> // Бібліотека мов
float i; // змінна з плаваючою точкою
int main() // тіло програми
{
    SetConsoleCP(1251); // для кирилиці
    SetConsoleOutputCP(1251); // для кирилиці
    float i; // змінна з плаваючою точкою
    std::cout << "Загадай число. (Щоб перейти далі, натисни 'Enter')\n"; 
    std::cin.get(); // натисніть ENTER, щоб продовжити
    std::cout << "Помнож його на 8. (Щоб перейти далі, натисни 'Enter')\n"; 
    std::cin.get();//користувач має ввести якийсь символ+ENTER, щоб продовжити
    std::cout << "Додай 3. (Щоб перейти далі, натисни 'Enter')\n"; //кажемо користувачеві, що робити
    std::cin.get(); //користувач має ввести якийсь символ+ENTER, щоб продовжити
    std::cout << "Поділи на 4. (Щоб перейти далі, натисни 'Enter')\n"; //кажемо користувачеві, що робити
    std::cin.get(); //користувач має ввести якийсь символ+ENTER, щоб продовжити
    std::cout << "Помнож на 7. (Щоб перейти далі, натисни 'Enter')\n"; //кажемо користувачеві, що робити
    std::cin.get(); //користувач має ввести якийсь символ+ENTER, щоб продовжити
    std::cout << "Піднеси отримане число до квадратного степеня. (Щоб перейти далі, натисни 'Enter')\n"; //кажемо користувачеві, що робити
    std::cin.get(); //користувач має ввести якийсь символ+ENTER, щоб продовжити
    std::cout << "Введи, що отримав:\n"; //кажемо користувачеві, що робити
    std::cin >> i; //змінна приймає значення числа користувача
    i = sqrt(i); // змінна приймає значення числа, яке загадав користувач
    i = i / 7 * 4;
    i = i - 3;
    i = i / 8;
    std::cout << "Твоє число: " << std::setprecision(3) << i << "\n"; // виводимо загадане число
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
