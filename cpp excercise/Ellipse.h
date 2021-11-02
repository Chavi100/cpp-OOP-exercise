#pragma once
#include "Iprintable.h"
#include "Ishape.h"
#define   PI 3.14
class Ellipse: public IPrintable, public IShape
{
public:
	Ellipse(double, double, int, int);
	virtual double Get_perimeter()const;
	virtual double Get_area()const;
	virtual void Set_initial_location(int x0, int y0);
	virtual char getPrintValueForCoordinate(int x, int y)const;
	virtual int getMinX()const
	{
		return m_x - (m_a/2.0);
	}
	virtual int getMaxX()const
	{
		return m_x + (m_a / 2.0);
	}
	virtual	int getMinY()const
	{
		return m_y - (m_b/2.0) ;
	}
	virtual	int getMaxY()const
	{
		return m_y + (m_b/2.0);
	}


protected:
	double m_a;
	double m_b;
	int m_x;
	int m_y;

};

