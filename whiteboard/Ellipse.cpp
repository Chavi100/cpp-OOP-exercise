#include "Ellipse.h"
#include "Iprintable.h"
#include "Ishape.h"

using namespace std;


Ellipse:: Ellipse(double a, double b, int x, int y):m_a(a),m_b(b/2),m_x(x),m_y(y)//making the height shorter then it would be printed in porportion.
{  }

void Ellipse::Set_initial_location(int x0, int y0)
{
    m_x = x0;
    m_y = y0;
}
double Ellipse::Get_perimeter()const
{
    return -1;
}
double Ellipse :: Get_area()const
{
    return m_a * m_b*2 * PI;//*2 because m_height is half of the size of the original.
}

char Ellipse::getPrintValueForCoordinate(int x, int y)const
{
    if (((((x  -  m_x) *  (x - m_x)) / (m_a * m_a)) + (((y  -  m_y)  * (y - m_y)) / (m_b * m_b)) <= 1))//this checks if the coordinate is in the shape.
        return '*';
    else
    {
        return' ';
    }
}


