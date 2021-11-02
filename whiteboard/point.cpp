#include "point.h"

point::point(int x , int y):m_x(x),m_y(y)
{   }
void point:: Set_initial_location(int x0, int y0) 
{
	m_x = x0;
	m_y = y0;
}
