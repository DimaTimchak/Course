#pragma once
#include <iostream>
#include "typedef.h"
#include "AutoClass.h"
#include "BikeClass.h"
#include "ScooterClass.h"
#include "TransportClass.h"
#include "ZamovnykClass.h"
#include "ZamovleniaClass.h"
using namespace std;

class ListTransport
{
private:
	int Size1, Size2, Size3, Size4, Size5;
	pTrans1 start1, end1, temp1;
	pTrans2 start2, end2, temp2;
	pTrans3 start3, end3, temp3;
	pZamovnyk start4, end4, temp4;
	pZamovlenia start5, end5, temp5;
public:
	ListTransport();
	// -------------------ADD---------------
	void AddZamovleniaAuto();
	void AddAuto();
	void AddZamovnyk();
	void AddBike();
	void AddScooter();
	//-----------------Out----------------
	void OutputAllOne();
	void OutputAllTwo();
	void OutputAllThre();
	void OutputAllZamovnyk();
	//Delete
	void DeleteZamovleniaAuto();
	void DeleteAuto();
	void DeleteZamovnyk();
	void DeleteBike();
	void DeleteScooter();
	// 
	//----------------SEARCH---------------------
	pZamovnyk SearchZamovnykString(string T);
	pZamovnyk SearchZamovnykFloat(float T);
	pTrans1 SearchAutoNumber(int a);
	pTrans1 SearchAutoString(string T);
	pTrans1 SearchAutoInt(int T);
	pTrans2 SearchBikeString(string T);
	pTrans2 SearchBikeInt(int T);
	pTrans3 SearchScooterString(string T);
	pTrans3 SearchScooterInt(int T);
};

