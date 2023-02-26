#include "Auto.h"
#include <iostream>

using namespace std;;


void Auto::InPut()
	{
		cout << "Введіть марку машини: ";
		cin >> marka;
		cout << "Введіть тип машини: ";
		cin >> type;
		cout << "Введіть категорію машини: ";
		cin >> kategoria;
		cout << "Введіть Макс.Швидкість машини: ";
		cin >> a;
		Setmax_speed(a);
		cout << "Введіть рік випуску машини: ";
		cin >> b;
		Setrik(b);
		cout << "Введіть пробіг машини: ";
		cin >> a1;
		Setprobig(a1);
		cout << "Введіть Колір машини: ";
		cin >> b1;
		Setcolor(b1);
	}

void Auto::OutPut()
	{
		cout << "Марка машини: " << marka << endl;
		cout << "Тип машини: " << type << endl;
		cout << "Категорія машини: " << kategoria << endl;
		cout << "Макс.Швидкість машини: " << Getmax_speed() << endl;
		cout << "Рік випуску машини: " << Getrik() << endl;
		cout << "Пробіг машини: " << Getprobig() << endl;
		cout << "Колір машини: " << Getcolor() << endl;
	}
string Auto::Getmarka()
	{
		return marka;
	}
string Auto::Gettype()
	{
		return type;
	}
string Auto::Getkategoria()
	{
		return kategoria;
	}
void Auto::SetNext1(Auto* n)
	{
		next1 = n;
	}
Auto* Auto:: GetNext1()
	{
		return next1;
	}
pTrans1& Auto::Next1()
	{
		return next1;
	}
int Auto::GetNumber()
	{
		Number++;
		return Number;
	}
