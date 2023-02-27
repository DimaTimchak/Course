
#include <iostream>
#include <Windows.h>
#include "ListTransportClass.h"
using namespace std;

int main(int argc, char** argv)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ListTransport obj;
	int cmd, cmd1, cmd2, cmd3, cmd4, cmd5, cmd6;
	string search1;
	int search2;
	float search3;
	cout << "Type 1 for help" << endl;
	while (true)
	{
		cout << endl << ">";
		cin >> cmd;
		cout << endl;
		switch (cmd)
		{
		w1:	case 1:
			cout << "Меню:" << endl;
			cout << "2. Добавити транспорт" << endl;
			cout << "3. Вивести список транспорту" << endl;
			cout << "4. Пошук транспорта за ознакою" << endl;
			cout << "5. Добавити нового замовника" << endl;
			cout << "6. Вивести список замовників" << endl;
			cout << "7. Пошук замовника за ознакою" << endl;
			break;
		case 2:
			while (true)
			{
				cout << "1. Добавити Автомобіль" << endl;
				cout << "2. Добавити Велосипед" << endl;
				cout << "3. Добавити Електросамокат" << endl;
				cout << "4. Вихід" << endl;
				cout << endl << ">";
				cin >> cmd1;
				cout << endl;
				switch (cmd1)
				{
				case 1:
					obj.AddAuto();
					break;
				case 2:
					obj.AddBike();
					break;
				case 3:
					obj.AddScooter();
					break;
				case 4:
					goto w1;
					break;
				}
			}
		case 3:
			cout << "АВТОМОБІЛІ:" << endl;
			obj.OutputAllOne();
			cout << "ВЕЛОСИПЕДИ:" << endl;
			obj.OutputAllTwo();
			cout << "ЕЛЕКТРОСАМОКАТИ:" << endl;
			obj.OutputAllThre();
			break;
		A:	case 4:
			while (true)
			{
				cout << "1. Пошук Автомобіля" << endl;
				cout << "2. Пошук Велосипеда" << endl;
				cout << "3. Пошук Електросамоката" << endl;
				cout << "4. Вихід" << endl;
				cout << endl << ">";
				cin >> cmd2;
				cout << endl;
				switch (cmd2)
				{
				case 1:
					while (true)
					{
						cout << "Пошук за: " << endl << "1. Маркою" << endl << "2. Типом" << endl << "3. Категорією" << endl << "4. Макс.швидкістю" << endl << "5. Роком" << endl << "6. Пробігом" << endl << "7. Кольором" << endl << "8. EXIT";
						cout << endl << ">";
						cin >> cmd3;
						cout << endl;
						switch (cmd3)
						{
						W2: case 1:

							cout << "Введіть ознаку автомобіля:" << endl;
							cin >> search1;
							obj.SearchAutoString(search1);
							break;
						case 2:
							goto W2;
							break;
						case 3:
							goto W2;
							break;
						W3:	case 4:
							cout << "Введіть ознаку автомобіля:" << endl;
							cin >> search2;
							obj.SearchAutoInt(search2);
							break;
						case 5:
							goto W3;
							break;
						case 6:
							goto W3;
							break;
						case 7:
							goto W2;
							break;
						case 8:
							goto A;
							break;
						}
					}

				case 2:
					while (true)
					{
						cout << "Пошук за: " << endl << "1. Типом" << endl << "2. Роком" << endl << "3. Пробігом" << endl << "4. Кольором" << endl << "5. Радіусом коліс" << endl << "6. EXIT" << endl;
						cout << endl << ">";
						cin >> cmd4;
						cout << endl;

						switch (cmd4)
						{
						WB1:	case 1:
							cout << "Введіть ознаку велосипеда:" << endl;
							cin >> search1;
							obj.SearchBikeString(search1);
							break;
						WB2:	case 2:
							cout << "Введіть ознаку велосипеда:" << endl;
							cin >> search2;
							obj.SearchBikeInt(search2);
							break;
						case 3:
							goto WB2;
							break;
						case 4:
							goto WB1;
							break;
						case 5:
							goto WB2;
							break;
						case 6:
							goto A;
							break;
						}
					}

				case 3:
					while (true)
					{
						cout << "Пошук за: " << endl << "1.Моделю" << endl << "2. Мак.швидкістю" << endl << "3. Роком" << endl << "4. Пробігом" << endl << "5. Кольором" << endl << "6. Эмкістю акумолятора" << endl << "7. EXIT" << endl;
						cout << endl << ">";
						cin >> cmd5;
						cout << endl;
						switch (cmd5)
						{
						WS1:	case 1:
							cout << "Введіть ознаку електросамоката:" << endl;
							cin >> search1;
							obj.SearchScooterString(search1);
							break;
						WS2:	case 2:
							cout << "Введіть ознаку електросамоката:" << endl;
							cin >> search2;
							obj.SearchScooterInt(search2);
							break;
						case 3:
							goto WS2;
							break;
						case 4:
							goto WS2;
							break;
						case 5:
							goto WS1;
							break;
						case 6:
							goto WS2;
							break;
						case 7:
							goto A;
							break;
						}
					}
				case 4:
					goto w1;
					break;
				}
			}
		case 5:
			obj.AddZamovnyk();
			break;
		case 6:
			obj.OutputAllZamovnyk();
			break;
		case 7:
			while (true)
			{
				cout << "Пошук за: " << endl << "1. Ім'ям" << endl << "2. Прізвищем" << endl << "3. Номером моб.телефона" << endl << "4. Категорією" << endl << "5. EXIT" << endl;
				cout << endl << ">";
				cin >> cmd6;
				cout << endl;
				switch (cmd6)
				{
				WZ1:	case 1:
					cout << "Введіть ознаку клієнта:" << endl;
					cin >> search1;
					obj.SearchZamovnykString(search1);
					break;
				case 2:
					goto WZ1;
					break;
				case 3:
					cout << "Введіть ознаку клієнта:" << endl;
					cin >> search3;
					obj.SearchZamovnykFloat(search3);
					break;
				case 4:
					goto WZ1;
					break;
				case 5:
					goto A;
					break;
				}
			}
		case 8:
			obj.AddZamovleniaAuto();
			break;
		}

	}
	return 0;
}

