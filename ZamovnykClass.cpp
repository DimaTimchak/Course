#include "ZamovnykClass.h"
#include <iostream>
#include "ZamovleniaClass.h"
#include "typedef.h"
using namespace std;



void Zamovnyk::InPut()
	{
		cout << "������ ��'�: " << endl;
		cin >> Name;
		cout << "������ �������: " << endl;
		cin >> Prizv;
		cout << "������ ����� ���.��������: " << endl;
		cin >> Number_tl;
		cout << "������ �������� ���������: " << endl;
		cin >> kategoriaZ;
	}
void Zamovnyk::OutPut()
	{
		cout << "��'�: " << Name << endl;
		cout << "�������: " << Prizv << endl;
		cout << "����� ���.��������: " << Number_tl << endl;
		cout << "�������� ���������: " << kategoriaZ << endl;
	}
string Zamovnyk::GetName()
	{
		return Name;
	}
string Zamovnyk::GetPrizv()
	{
		return Prizv;
	}
float Zamovnyk::GetNumber_tl()
	{
		return Number_tl;
	}
string Zamovnyk::GetkategoriaZ()
	{
		return kategoriaZ;
	}
void Zamovnyk::SetNext4(Zamovnyk* n)
	{
		next4 = n;
	}
Zamovnyk* Zamovnyk::GetNext4()
	{
		return next4;
	}
pZamovnyk& Zamovnyk::Next4()
	{
		return next4;
	}
