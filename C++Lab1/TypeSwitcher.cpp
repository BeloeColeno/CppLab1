#include "TypeSwitcher.h"

void tSwitcher(void)
{
	setlocale(0, "");
	int a = 2, b = 5;
	void obmen1(int, int);
	void obmen2(int*, int*);
	void obmen3(int&, int&);
	cout << "�� ������: a= " << a << " b= " << endl;
	// ����� obmen1(int,int)
	cout << "����� ������ 1: a= " << a << " b= " << endl;
	// ����� obmen2(int*,int*)
	cout << "����� ������ 2: a= " << a << " b= " << endl;
	// ����� obmen3(int&,int&) 
	cout << "����� ������ 3: a= " << a << " b= " << endl;
}
