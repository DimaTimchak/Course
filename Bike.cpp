#include "Bike.h"
#include <iostream>
using namespace std;


void Bike::InPut()
	{
		cout << "Введіть тип велосипеда: ";
		cin >> type1;
		cout << "Введіть рік випуску велосипеда: ";
		cin >> g;
		Setrik(g);
		cout << "Введіть пробіг велосипеда: ";
		cin >> g1;
		Setprobig(g1);
		cout << "Введіть Колір велосипеда: ";
		cin >> f;
		Setcolor(f);
		cout << "Введіть радіус коліс велосипеда:";
		cin >> R_kolis;
	}
void Bike::OutPut()
	{
		cout << "Тип велосипеда: " << type1 << endl;
		cout << "Рік випуску велосипеда: " << Getrik() << endl;
		cout << "Пробіг велосипеда: " << Getprobig() << endl;
		cout << "Колір велосипеда: " << Getcolor() << endl;
		cout << "Радіус коліс велосипеда:" << R_kolis << endl;
	}
string Bike::Gettype1()
	{
		return type1;
	}
int Bike::GetR_kolis()
	{
		return R_kolis;
	}
void Bike :: SetNext2(Bike* n)
	{
		next2 = n;
	}
Bike* Bike:: GetNext2()
	{
		return next2;
	}
pTrans2& Bike::Next2()
	{
		return next2;
	}
