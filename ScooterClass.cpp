#include "ScooterClass.h"
#include <iostream>

using namespace std;



void Scooter::InPut()
	{
		cout << "������ ������ ��������: ";
		cin >> model;
		cout << "������ ����.�������� ��������: ";
		cin >> g1;
		Setmax_speed(g1);
		cout << "������ �� ������� ��������: ";
		cin >> g2;
		Setrik(g2);
		cout << "������ ����� ��������: ";
		cin >> f2;
		Setprobig(f2);
		cout << "������ ���� ��������: ";
		cin >> f3;
		Setcolor(f3);
		cout << "������ ������ �����������:";
		cin >> Mah_akym;
	}
void Scooter::OutPut()
	{
		cout << "������ ��������: " << model << endl;
		cout << "����.�������� ��������: " << Getmax_speed() << endl;
		cout << "г� ������� ��������: " << Getrik() << endl;
		cout << "����� ��������: " << Getprobig() << endl;
		cout << "���� ��������: " << Getcolor() << endl;
		cout << "������ �����������:" << Mah_akym << endl;
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