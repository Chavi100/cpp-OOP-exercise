#pragma once
#include "Iprintable.h"

#pragma once



class iwhiteboard
{
public:

	virtual void accepts_IPrintable(IPrintable * object)=0;
	 virtual void print_white_board()const=0;


};

