#include "ConsoleWhiteboard.h"
#include <string>
#include <iostream>

using namespace std;

ConsoleWhiteboard ::ConsoleWhiteboard(int width, int height): m_width(width),m_height(height)//c'tor
{  }
void ConsoleWhiteboard::accepts_IPrintable(IPrintable* object)//accepts an IPrintable object and if it passes the conditions of space and dimension it adds it to the consoles list.
{
	if ((object->getMaxX() <= m_width) &( object->getMinX() >= 0))
		if ((object->getMaxY() <= m_height) & (object->getMinY() >= 0)& mone < n)
		{
			shapes[mone] = object;
			mone += 1;
		}  
		else
		{
			cout << "dimension error!" << endl;
		}
	else
	{
		cout << "dimension error!" << endl;
	}

}
void ConsoleWhiteboard::print_white_board()const//the function prints all itemes in the consoles list.
{
	for (size_t y = 0; y <=m_height; y++)//runs on every coordinate.
	{
		for (size_t x = 0; x <=m_width; x++)
		{
			char currentChar = ' ';
			for (size_t i = 0; i < mone; i++)//checks if the coordinate is in a shape in the consoles list.if its in a shape it prints the opropreate char to that shape if it stands the priorities. if its not it prints an empty space
			{
				if (currentChar == '*')
					break;
				else
				{
					if (currentChar != ' ')
					{
						if (shapes[i]->getPrintValueForCoordinate(x, y) == '*')
						{
							currentChar = '*';
						}
					}
					else
					{
						currentChar = shapes[i]->getPrintValueForCoordinate(x, y);
					}

				}
				
			}
			cout << currentChar;
		}
		cout << "\n";
	}
}




std::ostream& operator<<(std::ostream& lhs, const ConsoleWhiteboard& rhs)//operator overloading for(<<). (<<) will print the consul. 
{
	rhs.print_white_board();
	return lhs;
}
