#include "Text.h"
#include <string>

using namespace std;

Text::Text(string text,int x,int y):m_text(text),m_x(x),m_y(y)
{  }

void Text::Set_initial_location(int x0, int y0)//the user could change the place where the shape will be printed.
{
    m_x = x0;
    m_y = y0;
}
 double Text::Get_area()const
 {
     return m_text.length();//the height of text is 1.
 }
 double Text::Get_perimeter()const
 {
     return m_text.length() + 2;//the height of text is 1.
 }
 char Text::getPrintValueForCoordinate(int x, int y) const
 {
     if ((x >= m_x) & (x <= m_text.length()+m_x)& (y==m_y))//this checks if the coordinate is in the shape.
     {
         return m_text[x-m_x];//returns the char in the text thats un that coordinate
     }
     return ' ';
 }
