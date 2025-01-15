// PRODUCT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h> // Бібліотека мов
using namespace std;
int main()
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    int a, numb = 0;
    double dub = 1;
    do
    {
        numb++;
        cout << "a[" << numb << "] = ";
        cin >> a;
        if (a % 2 == 0 && a < 0 && a != 0)
        {
                dub *= a;
        }
        
    } while (a != 0);
    if (dub == 1) 
    {
        dub = 0;
    }
    cout << "ДОБУТОК = " << dub << endl;
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
