#include "TypeSwitcher.h"

void tSwitcher(void)
{
	setlocale(0, "");
	int a = 2, b = 5;
	void obmen1(int, int);
	void obmen2(int*, int*);
	void obmen3(int&, int&);
	cout << "המ מבלוםא: a= " << a << " b= " << endl;
	// גûחמג obmen1(int,int)
	cout << "ןמסכו מבלוםא 1: a= " << a << " b= " << endl;
	// גûחמג obmen2(int*,int*)
	cout << "ןמסכו מבלוםא 2: a= " << a << " b= " << endl;
	// גûחמג obmen3(int&,int&) 
	cout << "ןמסכו מבלוםא 3: a= " << a << " b= " << endl;
}
