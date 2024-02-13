#include <iostream>
#include "Pointer.h"
#include "Grade.h"
#include "TypeSwitcher.h"
using namespace std;

void main(void)
{
	setlocale(0, "");
	int choice;
	bool cheker = true;
	while (cheker)
	{
		cout << "Выберите задание первой лабораторной: (1|2|3|0) ";
		cin >> choice;
		switch (choice)
		{
		case 1: grade(); 
			cout << "\n"; 
			break;
		case 2: pointer();
			cout << "\n";
			break;
		case 3: tSwitcher();
			cout << "\n";
			break;
		case 0: {
			cout << "Выход из программы." << "\n" << endl;
			cheker = false;
				break;
		}
		default:
			cout << "Не поддерживаемый ввод." << "\n" << endl; break;
		}
	}
}
