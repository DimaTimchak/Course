#pragma once
#include <iostream>
#include "typedef.h"
using namespace std;
class Zamovlenia
{
	string data;
	string time;
	int tryvalist;
	Zamovlenia* next5;
public:
	void InPut2();
	void OutPut2();
	void SetNext5(Zamovlenia* n);
	Zamovlenia *GetNext5();
	pZamovlenia &Next5();
};

