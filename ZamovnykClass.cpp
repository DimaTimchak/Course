#include "ZamovnykClass.h"
#include <iostream>
#include "ZamovleniaClass.h"
#include "typedef.h"
using namespace std;



void Zamovnyk::InPut()
	{
		cout << "Введіть Ім'я: " << endl;
		cin >> Name;
		cout << "Введіть прізвище: " << endl;
		cin >> Prizv;
		cout << "Введіть Номер моб.телефона: " << endl;
		cin >> Number_tl;
		cout << "Введіть категорію замовника: " << endl;
		cin >> kategoriaZ;
	}
void Zamovnyk::OutPut()
	{
		cout << "Ім'я: " << Name << endl;
		cout << "Прізвище: " << Prizv << endl;
		cout << "Номер моб.телефона: " << Number_tl << endl;
		cout << "Категорію замовника: " << kategoriaZ << endl;
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
