#pragma once
#include "Iprintable.h"


class point:public IPrintable
{
public:
	point(int, int);
	virtual void Set_initial_location(int x0, int y0);
protected:
	int	m_x;
	int m_y;
};

