#pragma once
#include "Ishape.h"
#include "Iprintable.h"
class Rectangle :public IShape,public IPrintable
{public:
	Rectangle(double, double, int, int);
	virtual void Set_initial_location(int x0, int y0);
	virtual char getPrintValueForCoordinate(int x, int y)const;
	virtual double Get_area()const;
	virtual double Get_perimeter()const;
	virtual int getMinX()const
	{
		return m_x;
	}
	virtual int getMaxX()const
	{
		return m_x + m_width;
	}
	virtual	int getMinY()const
	{
		return m_y;
	}
	virtual	int getMaxY()const
	{
		return m_y + m_height;
	}


protected:
	double m_width;
	double m_height;
	int m_x;
	int m_y;

};

