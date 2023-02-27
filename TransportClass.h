#pragma once
#include <string>

class Transport
{
private:
	int max_speed;
	std::string color;
	int rik;
	int probig;
public:
	void Setmax_speed(int a);
	int Getmax_speed();
	void Setcolor(std::string a);
	std::string Getcolor();
	void Setrik(int b);
	int Getrik();
	void Setprobig(int b);
	int Getprobig();
	virtual void InPut() = 0;
	virtual void OutPut() = 0;
};

