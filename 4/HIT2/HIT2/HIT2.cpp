// HIT2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Бібліотека вводу і виводу
#include <Windows.h> // Бібліотека мов
using namespace std;
int main() // тіло програми
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    float giga, x0 = 7, y0 = 7, R0 = 5, x1, y1, flor;
    cout << "Введи координати точки А" << endl;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    giga = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
    if (giga < R0 * R0)
    {
        flor = 1;
        cout << "Точка A (" << x1 << ";" << y1 << ")  потрапляє в коло з центром (" << x0 << ";" << y0 << ")  і радіусом " << R0 << "." << endl;
    }
    else if (giga == R0 * R0)
    {
        flor = 2;
        cout << "Точка A (" << x1 << ";" << y1 << ")  лежить на кордоні кола з центром (" << x0 << ";" << y0 << ")  і радіусом " << R0 << "." << endl;
    }
    else
    {
        cout << "Точка А не потрапила. Спробуй ще раз." << endl;

        while ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) > R0 * R0)
        {
            double shu, sin;
            shu = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
            cout << "x1 = "; cin >> x1;
            cout << "y1 = "; cin >> y1;
            sin = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
            if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) > R0 * R0)
            {
                if (sin < shu)
                {
                    cout << "Тепліше" << endl;

                }
                else if (sin > shu)
                {
                    cout << "Холодніше." << endl;
                }
                else if (sin == shu)
                {
                    cout << "Відстань від центру колу не змінилась. " << endl;
                }
            }

        }
        if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) < R0 * R0)
        {
            flor = 1;
            cout << "Точка A (" << x1 << ";" << y1 << ")  потрапляє в коло з центром (" << x0 << ";" << y0 << ")  і радіусом " << R0 << "." << endl;
        }
        else if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) == R0 * R0)
        {
            flor = 2;
            cout << "Точка A (" << x1 << ";" << y1 << ")  лежить на кордоні кола з центром (" << x0 << ";" << y0 << ")  і радіусом " << R0 << "." << endl;
        }
    }
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
