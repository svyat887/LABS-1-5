// MENU2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Працює інформаційна система факультетуприкладної математики:\n";
	cout << "0. Вихід\n";
	cout << "1. Новина дня\n";
	cout << "2. Анекдот тижня\n";
	cout << "3. Автори !!!\n";
	cout << "Введіть відповідний номер і натисніть ENTER \n";
		do
		{
			cin >> a;
			switch (a)
			{
			case 0:
				cout << "Ви завершили програму." << endl;
				break;
			case 1:
				cout << "Відомий український стрімер 'Папіч' розпочав проходити Balatro." << endl;
				break;
			case 2:
				cout << "На даху зустрічаються два коти – київський та одеський." << endl <<
					"– Ну шо, пом'яукаємо? – пропонує київський." << endl <<
					"– Таки мяу." << endl;
				break;
			case 3:
				cout << "Володимир Кшиштовський, Леонід Байгорода, Максим Свинера, Ічіго Куросакі" << endl;
				break;
			default:
				cout << "Ти зовсім тупенький(-ка)? Є всього 3 варіанти" << endl;
			}
		} while (a != 0);
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
