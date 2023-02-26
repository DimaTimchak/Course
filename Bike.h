#pragma once
#include "Transport.h"
#include <iostream>
#include "typedef.h"
using namespace std;


class Bike : public Transport
{
private:
	string type1;
	int R_kolis;
	Bike* next2;
	int g, g1;
	string f;
public:
	
	void InPut();
	void OutPut();
	string Gettype1();
	int GetR_kolis();
	void SetNext2(Bike *n);
	Bike *GetNext2();
	pTrans2 &Next2();
};
