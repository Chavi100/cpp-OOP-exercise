#include "Rectangle.h"
#include "Iprintable.h"
#include "Ishape.h"

using namespace std;
Rectangle::Rectangle(double width, double height, int x, int y):m_x(x),m_y(y), m_width(width), m_height(height/2)//making the height shorter then it would be printed in porportion.
{    }

 void Rectangle::Set_initial_location(int x0, int y0)//the user could change the place where the shape will be printed.
{

     m_x = x0;
     m_y = y0;
}
 double Rectangle::Get_area()const
 {
   
     return m_width * m_height * 2;//*2 because m_height is half of the size of the original.
 }

 double Rectangle::Get_perimeter()const
 {
     return m_width * 2 + m_height * 4;//*2 because m_height is half of the size of the original.
 }
 char Rectangle::getPrintValueForCoordinate(int x, int y)const
 {
     if (x >= getMinX()& x< getMaxX())//this checks if the coordinate is in the shape.
         if (y>= getMinY()& y< getMaxY())
         {
             return '*' ;
         }
    return ' ' ;
 }
