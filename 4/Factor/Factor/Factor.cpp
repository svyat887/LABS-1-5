// Factor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <iostream>
#include <limits>
#include <Windows.h> // Бібліотека мов
using namespace std;
int main() 
{
    SetConsoleCP(1251); //для кирилиці
    SetConsoleOutputCP(1251); //для кирилиці
    double N, N1, c, dub=1;
    cout << "Введи число N: ";
    cin >> N;
    if (!cin)
    {
        cout << "N must be a number." << endl;
    }
    else
    {
        if (N < 0)
        {
            cout << "ERROR: N must not be negative." << endl;
        }
        if (N == 0)
         {
           dub = 1;
           N1 = N;
           cout << N1 << "! = " << dub << endl;
         }
        if (N == 1)
        {
          dub = 1;
          N1 = N;
          cout << N1 << "! = " << dub << endl;
        }
        else if(N > 0)
        {
            for (double n0 = 1; n0 < N; n0++)
            {
                c = N - n0;
            }
            if (c < 1)
            {
                cout << "ERROR: N must be natural, not real." << endl;
            }
            else
            { 
                N1 = N;
                    while (N >= 1)
                    {
                        dub *= N;
                        N--;
                    } 
                cout << N1 << "! = " << dub << endl;
            }
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
