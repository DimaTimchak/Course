#include "ListTransport.h"
#include <iostream>

using namespace std;

 
ListTransport:: ListTransport()
	{
		Size1 = 0;
		start1 = end1 = NULL;
		Size2 = 0;
		start2 = end2 = NULL;
		Size3 = 0;
		start3 = end3 = NULL;
		Size4 = 0;
		start4 = end4 = NULL;
		Size5 = 0;
		start5 = end5 = NULL;
	}

	// -------------------ADD---------------
void ListTransport  ::  AddZamovleniaAuto()
{
		int l;
		pZamovlenia temp5 = new Zamovlenia();
		temp5->InPut2();
		OutputAllOne();
		cout << "Введіть номер машини:";
		cin >> l;
		SearchAutoNumber(l);
		if (Size5 == 0)
		{
			start5 = end5 = temp5;
		}
		else
		{
			end5->Next5() = temp5;
			end5 = end5->Next5();
		}
		Size5++;
	}

void ListTransport::AddAuto()
	{
		pTrans1 temp1 = new Auto();
		temp1->InPut();
		temp1->GetNumber();
		if (Size1 == 0)
		{
			start1 = end1 = temp1;
		}
		else
		{
			end1->Next1() = temp1;
			end1 = end1->Next1();
		}
		Size1++;
	}
void ListTransport::AddZamovnyk()
	{
		pZamovnyk temp4 = new Zamovnyk();
		temp4->InPut();
		if (Size4 == 0)
		{
			start4 = end4 = temp4;
		}
		else
		{
			end4->Next4() = temp4;
			end4 = end4->Next4();
		}
		Size4++;
	}
void ListTransport::AddBike()
	{
		pTrans2 temp2 = new Bike();
		temp2->InPut();
		if (Size2 == 0)
		{
			start2 = end2 = temp2;
		}
		else
		{
			end2->Next2() = temp2;
			end2 = end2->Next2();
		}
		Size2++;
	}
void ListTransport::AddScooter()
	{
		pTrans3 temp3 = new Scooter();
		temp3->InPut();
		if (Size3 == 0)
		{
			start3 = end3 = temp3;
		}
		else
		{
			end3->Next3() = temp3;
			end3 = end3->Next3();
		}
		Size3++;
	}

	//-----------------Out----------------
void ListTransport::OutputAllOne()
	{
		if (Size1 == 0)
		{
			cout << "В сиску відсутні автомобілі!" << endl;
			return;
		}
		temp1 = start1;
		for (int i = 0; i < Size1; i++)
		{
			temp1->OutPut();
			cout << endl;
			temp1 = temp1->Next1();
		}
	}
void ListTransport::OutputAllTwo()
	{
		if (Size2 == 0)
		{
			cout << "В сиску відсутні Велосипеди!" << endl;
			return;
		}
		temp2 = start2;
		for (int i = 0; i < Size2; i++)
		{
			temp2->OutPut();
			cout << end2;
			temp2 = temp2->Next2();
		}
	}
void ListTransport::OutputAllThre()
	{
		if (Size3 == 0)
		{
			cout << "В сиску відсутні електросамокати!" << endl;
			return;
		}
		temp3 = start3;
		for (int i = 0; i < Size3; i++)
		{
			temp3->OutPut();
			cout << endl;
			temp3 = temp3->Next3();
		}
	}
void ListTransport::OutputAllZamovnyk()
	{
		if (Size4 == 0)
		{
			cout << "В сиску відсутні Замовники!" << endl;
			return;
		}
		temp4 = start4;
		for (int i = 0; i < Size4; i++)
		{
			temp4->OutPut();
			cout << endl;
			temp4 = temp4->Next4();
		}
	}

	//----------------SEARCH---------------------

pZamovnyk ListTransport::SearchZamovnykString(string T)
	{
		if (Size4 == 0)
		{
			cout << "Такого замовника немає" << endl;
			return NULL;
		}
		temp4 = start4;
		do
		{
			if (temp4->GetName() == T)
			{
				temp4->OutPut();
				return temp4;
			}
			else if (temp4->GetPrizv() == T)
			{
				temp4->OutPut();
				return temp4;
			}
			else if (temp4->GetkategoriaZ() == T)
			{
				temp4->OutPut();
				return temp4;
			}
			temp4 = temp4->Next4();
		} while (temp4 != start4);
		cout << "Такого замовника немає" << endl;
		return NULL;
	}
pZamovnyk ListTransport::SearchZamovnykFloat(float T)
	{
		if (Size4 == 0)
		{
			cout << "Такого замовника немає" << endl;
			return NULL;
		}
		temp4 = start4;
		do
		{
			if (temp4->GetNumber_tl() == T)
			{
				temp4->OutPut();
				return temp4;
			}
			temp4 = temp4->Next4();
		} while (temp4 != start4);
		cout << "Такого замовника немає" << endl;
		return NULL;
	}
pTrans1 ListTransport::SearchAutoNumber(int a)
	{
		if (Size1 == 0)
		{
			cout << "Такого автомобіля немає" << endl;
			return NULL;
		}
		temp1 = start1;
		do
		{
			if (temp1->GetNumber() == a)
			{
				return temp1;
			}
			temp1 = temp1->Next1();
		} while (temp1 != start1);
		cout << "Такого автомобіля немає" << endl;
		return NULL;
	}
pTrans1 ListTransport::SearchAutoString(string T)
	{
		if (Size1 == 0)
		{
			cout << "Такого автомобіля немає" << endl;
			return NULL;
		}
		temp1 = start1;
		do
		{
			if (temp1->Getmarka() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			else if (temp1->Gettype() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			else if (temp1->Getkategoria() == T)
			{
				temp1->OutPut();
				return temp1;
			}

			else if (temp1->Getcolor() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			temp1 = temp1->Next1();
		} while (temp1 != start1);
		cout << "Такого автомобіля немає" << endl;
		return NULL;
	}
pTrans1 ListTransport::SearchAutoInt(int T)
	{
		if (Size1 == 0)
		{
			cout << "Такого автомобіля немає" << endl;
			return NULL;
		}
		temp1 = start1;
		do
		{
			if (temp1->Getmax_speed() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			else if (temp1->Getrik() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			else if (temp1->Getprobig() == T)
			{
				temp1->OutPut();
				return temp1;
			}
			temp1 = temp1->Next1();
		} while (temp1 != start1);
		cout << "Такого автомобіля немає" << endl;
		return NULL;
	}
	//
	//
pTrans2 ListTransport::SearchBikeString(string T)
	{
		if (Size2 == 0)
		{
			cout << "Такого велосипеда немає" << endl;
			return NULL;
		}
		temp2 = start2;
		do
		{
			if (temp2->Gettype1() == T)
			{
				temp2->OutPut();
				return temp2;
			}
			else if (temp2->Getcolor() == T)
			{
				temp2->OutPut();
				return temp2;
			}
			temp2 = temp2->Next2();
		} while (temp2 != start2);
		cout << "Такого Велосипеда немає" << endl;
		return NULL;
	}
pTrans2 ListTransport::SearchBikeInt(int T)
	{
		if (Size2 == 0)
		{
			cout << "Такого велосипеда немає" << endl;
			return NULL;
		}
		temp2 = start2;
		do
		{
			if (temp2->Getrik() == T)
			{
				temp2->OutPut();
				return temp2;
			}
			else if (temp2->Getprobig() == T)
			{
				temp2->OutPut();
				return temp2;
			}
			else if (temp2->GetR_kolis() == T)
			{
				temp2->OutPut();
				return temp2;
			}

			temp2 = temp2->Next2();
		} while (temp2 != start2);
		cout << "Такого Велосипеда немає" << endl;
		return NULL;
	}
	//
	//
pTrans3 ListTransport::SearchScooterString(string T)
	{
		if (Size3 == 0)
		{
			cout << "Такого електросамоката немає" << endl;
			return NULL;
		}
		temp3 = start3;
		do
		{
			if (temp3->Getmodel() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			else if (temp3->Getcolor() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			temp3 = temp3->Next3();
		} while (temp3 != start3);
		cout << "Такого електросамоката немає" << endl;
		return NULL;
	}
pTrans3 ListTransport::SearchScooterInt(int T)
	{
		if (Size3 == 0)
		{
			cout << "Такого електросамоката немає" << endl;
			return NULL;
		}
		temp3 = start3;
		do
		{
			if (temp3->Getmax_speed() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			else if (temp3->Getrik() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			else if (temp3->Getprobig() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			else if (temp3->GetMah_akym() == T)
			{
				temp3->OutPut();
				return temp3;
			}
			temp3 = temp3->Next3();
		} while (temp3 != start3);
		cout << "Такого електросамоката немає" << endl;
		return NULL;
	}