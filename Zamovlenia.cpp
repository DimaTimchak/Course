#include "Zamovlenia.h"
#include <iostream>
#include "ListTransport.h"
using namespace std;


void Zamovlenia::InPut2()
	{
		cout << "Введіть Дату замовленя: " << endl;
		cin >> data;
		cout << "Введіть час замовлення: " << endl;
		cin >> time;
		cout << "Введіть тривалість замовлення: " << endl;
		cin >> tryvalist;
	}
void Zamovlenia::OutPut2()
	{
		cout << "Дата замовленя: " << data << endl;
		cout << "Час замовлення: " << time << endl;
		cout << "Тривалість замовлення: " << tryvalist << endl;
	}
void Zamovlenia::SetNext5(Zamovlenia* n)
	{
		next5 = n;
	}
Zamovlenia* Zamovlenia::GetNext5()
	{
		return next5;
	}
pZamovlenia& Zamovlenia::Next5()
	{
		return next5;
	}
