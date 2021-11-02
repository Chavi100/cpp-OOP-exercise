#include "ConsoleWhiteboard.h"
#include "Iprintable.h"
#include "Ishape.h"
#include "Iwhiteboard.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Square.h"
#include "Text.h"
#include <string>
#include <iostream>

void main()
{
	Text h("hello world", 0, 80);
	Rectangle d(8, 16, 22, 60);
	Ellipse f(10, 20, 10, 30);
	Circle s(10, 25, 45);
	Square t(8, 40, 60);
	IPrintable* rec=&d;
	IPrintable* elli=&f;
	IPrintable* word=&h;
	IPrintable* circ = &s;
	IPrintable* squ = &t;
	ConsoleWhiteboard x(200, 85);
	x.accepts_IPrintable(rec);
	x.accepts_IPrintable(elli);
	x.accepts_IPrintable(word);
	x.accepts_IPrintable(circ);
	x.accepts_IPrintable(squ);
	cout << x ;
	
	


}