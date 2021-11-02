#pragma once

class IShape
{
public:
	virtual void Set_initial_location(int x0, int y0) = 0;
	virtual double Get_area()const=0;
	virtual double Get_perimeter()const=0 ;

};
