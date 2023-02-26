#pragma once
#include "Transport.h"
#include <iostream>
#include "typedef.h"
using namespace std;


class Zamovnyk :public Transport
{
	string Name;
	string Prizv;
	float Number_tl;
	string kategoriaZ;
	Zamovnyk* next4;
public:
	void InPut();
	void OutPut();
	string GetName();
	string GetPrizv();
	float GetNumber_tl();
	string GetkategoriaZ();
	void SetNext4(Zamovnyk* n);
	Zamovnyk *GetNext4();
	pZamovnyk &Next4();
	
};
