#pragma once
#include "Ellipse.h"
class Circle: public Ellipse
{
public:
	Circle(double, int, int);
	double Get_perimeter();
	
};

