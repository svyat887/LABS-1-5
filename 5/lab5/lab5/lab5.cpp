// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

void madness() {
    int n, a, max, numb = 1;
    cout << "Введи кількість членів своєї послідовності." << endl << "n = ";
    cin >> n;
    while (n <= 0) { 
        cout << "Кількість членів послідовності має бути більше 0." << endl << "n = ";
        cin >> n;
    }
    cout << "Тепер ти можеш вводити елементи своєї послідовності." << endl << endl;
    cout << "a[" << numb << "] = ";
    cin >> a;
    max = a;
    
    numb++;
    for (int i = 2; i <= n; i++) 
    {
        cout << "a[" << numb << "] = ";
        cin >> a;
        if (a > max)
        {
            
            max = a;

        }
        if (max > a)
        {
            cout << endl << "a = " << max << "\t" << "n = " << numb << endl << endl;
            
        }
        numb++;
    }
}
int main() {
    SetConsoleCP(1251); // Для кирилиці
    SetConsoleOutputCP(1251);

    while (true) 
    {
        int starter;
        cout << "Введіть 0, якщо хочете завершити програму." << endl
            << "Введіть 1, якщо хочете продовжити програму." << endl
            << "Твій вибір: ";
        cin >> starter;
        switch (starter) 
        {
        case 0: 
            return 0;
        case 1: 
            madness();
            break;
        default: 
            cout << "Некоректний вибір. Спробуйте ще раз." << endl;
            break;
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
