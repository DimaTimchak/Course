#include "Zamovlenia.h"
#include <iostream>
#include "ListTransport.h"
using namespace std;


void Zamovlenia::InPut2()
	{
		cout << "������ ���� ���������: " << endl;
		cin >> data;
		cout << "������ ��� ����������: " << endl;
		cin >> time;
		cout << "������ ��������� ����������: " << endl;
		cin >> tryvalist;
	}
void Zamovlenia::OutPut2()
	{
		cout << "���� ���������: " << data << endl;
		cout << "��� ����������: " << time << endl;
		cout << "��������� ����������: " << tryvalist << endl;
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
