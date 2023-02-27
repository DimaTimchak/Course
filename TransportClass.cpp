#include "TransportClass.h"
#include <iostream>



void Transport::Setmax_speed(int a)
	{
		max_speed = a;
	}
int Transport::Getmax_speed()
	{
		return max_speed;
	}
void Transport::Setcolor(std::string a)
	{
		color = a;
	}
std::string Transport::Getcolor()
	{
		return color;
	}
void Transport::Setrik(int b)
	{
		rik = b;
	}
int Transport::Getrik()
	{
		return rik;
	}
void Transport::Setprobig(int b)
	{
		probig = b;
	}
int Transport::Getprobig()
	{
		return probig;
	}
