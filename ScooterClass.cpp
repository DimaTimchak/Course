#include "ScooterClass.h"
#include <iostream>

using namespace std;



void Scooter::InPut()
	{
		cout << "Введіть модель самоката: ";
		cin >> model;
		cout << "Введіть Макс.Швидкість самоката: ";
		cin >> g1;
		Setmax_speed(g1);
		cout << "Введіть рік випуску самоката: ";
		cin >> g2;
		Setrik(g2);
		cout << "Введіть пробіг самоката: ";
		cin >> f2;
		Setprobig(f2);
		cout << "Введіть Колір самоката: ";
		cin >> f3;
		Setcolor(f3);
		cout << "Введіть ємкість акумолятора:";
		cin >> Mah_akym;
	}
void Scooter::OutPut()
	{
		cout << "Модель самоката: " << model << endl;
		cout << "Макс.Швидкість самоката: " << Getmax_speed() << endl;
		cout << "Рік випуску самоката: " << Getrik() << endl;
		cout << "Пробіг самоката: " << Getprobig() << endl;
		cout << "Колір самоката: " << Getcolor() << endl;
		cout << "Ємкість акумолятора:" << Mah_akym << endl;
	}
int Scooter::GetMah_akym()
	{
		return Mah_akym;
	}
string Scooter::Getmodel()
	{
		return model;
	}
void Scooter::SetNext3(Scooter* n)
	{
		next3 = n;
	}
Scooter* Scooter::GetNext3()
	{
		return next3;
	}
pTrans3& Scooter::Next3()
	{
		return next3;
	}