#pragma once
#include <string>
#include "Iprintable.h"
#include "Ishape.h"
using namespace std;
class Text:public IPrintable,public IShape
{
public:
	Text(string,int, int);
	virtual void Set_initial_location(int x0, int y0);
	virtual double Get_area()const;
	virtual double Get_perimeter()const;
	virtual char getPrintValueForCoordinate(int x, int y) const;
	virtual int getMinX()const
	{
		return m_x;
	}
	virtual int getMaxX()const
	{
		return m_text.length() + m_x;
	}
	virtual	int getMinY()const
	{
		return m_y;
	}
	virtual	int getMaxY()const
	{
		return m_y + 1;
	}

protected:
	string m_text;
	int m_x;
	int m_y;

};

