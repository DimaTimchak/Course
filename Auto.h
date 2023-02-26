#pragma once
#include "Transport.h"
#include <iostream>
#include "typedef.h"

using namespace std;

class Auto : public Transport
{
private:
	string marka;
	string type;
	string kategoria;
	Auto* next1;
	int a, b, a1, Number;
	string b1;

public:
	void InPut();
	void OutPut();
	std::string Getmarka();
	std::string Gettype();
	std::string Getkategoria();
	void SetNext1(Auto *n);
	Auto* GetNext1();
	pTrans1& Next1();
	int GetNumber();
};

