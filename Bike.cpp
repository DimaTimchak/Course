#include "Bike.h"
#include <iostream>
using namespace std;


void Bike::InPut()
	{
		cout << "������ ��� ����������: ";
		cin >> type1;
		cout << "������ �� ������� ����������: ";
		cin >> g;
		Setrik(g);
		cout << "������ ����� ����������: ";
		cin >> g1;
		Setprobig(g1);
		cout << "������ ���� ����������: ";
		cin >> f;
		Setcolor(f);
		cout << "������ ����� ���� ����������:";
		cin >> R_kolis;
	}
void Bike::OutPut()
	{
		cout << "��� ����������: " << type1 << endl;
		cout << "г� ������� ����������: " << Getrik() << endl;
		cout << "����� ����������: " << Getprobig() << endl;
		cout << "���� ����������: " << Getcolor() << endl;
		cout << "����� ���� ����������:" << R_kolis << endl;
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
