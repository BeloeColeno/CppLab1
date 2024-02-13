#include <iostream>
#include "Grade.h"
using namespace std;

void grade(void)
{
	int i, k, num;
	//setlocale(0, "");
	cout << "¬ведите значение основани€: ";
	cin >> num;
	int power(int, int);
	for (i = 0; i < 10; i++)
	{
		k=power(num, i);
		cout<< "„исло: "<< num << ", степень: " << i << ", итог: " << k << endl;
	}
}

int power(int x, int n)
{
	int i, p = 1;
	for (i = 1; i < n; i++) p *= x;
	return p;
}