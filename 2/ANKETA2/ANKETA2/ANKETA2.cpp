// ANKETA2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> //бібліотека для setw()
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a1[41], a2[41], a3[41], a4[11], a5[11], a6[101], a7[21], a8[41], a9[11], a10[51]; //оголошуємо змінні
	cout << "          Прізвище: ";
	cin.getline(a1, 41);//дозволяє ввести рядок символів
	cout << "              Ім'я: ";
	cin.getline(a2, 41);//дозволяє ввести рядок символів
	cout << "       По батькові: ";
	cin.getline(a3, 41);//дозволяє ввести рядок символів
	cout << "             Стать: ";
	cin.getline(a4, 11);//дозволяє ввести рядок символів
	cout << "   Дата народження: ";
	cin.getline(a5, 11);//дозволяє ввести рядок символів
	cout << "            Адреса: ";
	cin.getline(a6, 101);
	cout << "    Номер телефону: ";
	cin.getline(a7, 21);//дозволяє ввести рядок символів
	cout << "    Місце навчання: ";
	cin.getline(a8, 41);//дозволяє ввести рядок символів
	cout << "             Група: ";
	cin.getline(a9, 11);//дозволяє ввести рядок символів
	cout << "             Хоббі: ";
	cin.getline(a10, 51);//дозволяє ввести рядок символів
	system("cls"); //очищує консоль
	cout << setw(40) << "АНКЕТА" << endl << endl;
	cout << left << "Прізвище:" << setw(20) << a1 << " Ім'я: " << setw(21) << a2 << " По батькові: " << a3 << endl;//налаштовуємо вирівнювання по лівому боку
	cout << "Номер телефону: " << setw(41) << a7 << " Хоббі: " << a10 << endl;
	cout << "Місце навчання: " << setw(41) << a8 << " Група: " << a9 << endl;
	cout << "Дата народження: " << setw(40) << a5 << " Стать: " << a4 << endl;
	cout << "Адреса: " << a6 << endl;
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
