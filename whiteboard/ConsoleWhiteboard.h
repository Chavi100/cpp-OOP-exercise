#pragma once
#include "Iwhiteboard.h"
#include <iostream>
#define n 255


class ConsoleWhiteboard:public iwhiteboard
{
public:
	ConsoleWhiteboard(int, int);
	virtual void accepts_IPrintable(IPrintable* object);
	virtual void print_white_board()const;
	friend std::ostream& operator<<(std::ostream&, const ConsoleWhiteboard&);
private:
	int m_height;
	int m_width;
	IPrintable* shapes[n];
	int mone=0;
};
