#include "Circle.h"
#include "Ellipse.h"
using namespace std;

Circle::Circle(double size,int x,int y):Ellipse(size,size,x,y)
{  }

double Circle::Get_perimeter()
{
	return m_a * PI*2;
}