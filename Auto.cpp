#include "Auto.h"
#include <iostream>

using namespace std;;


void Auto::InPut()
	{
		cout << "������ ����� ������: ";
		cin >> marka;
		cout << "������ ��� ������: ";
		cin >> type;
		cout << "������ �������� ������: ";
		cin >> kategoria;
		cout << "������ ����.�������� ������: ";
		cin >> a;
		Setmax_speed(a);
		cout << "������ �� ������� ������: ";
		cin >> b;
		Setrik(b);
		cout << "������ ����� ������: ";
		cin >> a1;
		Setprobig(a1);
		cout << "������ ���� ������: ";
		cin >> b1;
		Setcolor(b1);
	}

void Auto::OutPut()
	{
		cout << "����� ������: " << marka << endl;
		cout << "��� ������: " << type << endl;
		cout << "�������� ������: " << kategoria << endl;
		cout << "����.�������� ������: " << Getmax_speed() << endl;
		cout << "г� ������� ������: " << Getrik() << endl;
		cout << "����� ������: " << Getprobig() << endl;
		cout << "���� ������: " << Getcolor() << endl;
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
