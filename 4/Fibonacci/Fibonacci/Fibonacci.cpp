// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h> // Бібліотека мов
using namespace std;
int main()
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    long long int N, a = 0, b = 1, c;
    cout << "N = ";
    cin >> N;
    while( N <= 0)
    {
        cout << "N має бути натуральним числом." << endl << "N = ";
        cin >> N;
    }
    if (N == 1)
    {
        c = 1;
    }
    else
    {
        {
            for (int n = 2; n <= N; n++)
            {
                c = a + b;
                a = b;
                b = c;
            }
        }
    }
    
    cout << "F[" << N << "] = " << c << endl;
    system("pause");
}
// Run program: Ct
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
