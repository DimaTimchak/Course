#pragma once
#include "Transport.h"
#include <iostream>
#include "typedef.h"
using namespace std;


class Scooter : public Transport
{
public:
	int Mah_akym;
	string model;
	Scooter* next3;
	int g1, g2, f2;
	string f3;

	void InPut();
	void OutPut();
	int GetMah_akym();
	string Getmodel();
	void SetNext3(Scooter* n);
	Scooter* GetNext3();
	pTrans3& Next3();
};

