#include <String>
#include <iostream>
#pragma once

class Pie
{
public:
	// = 0 makes it pure virtual, so Pie becomes abstract - only child classes can be instantiated
	virtual std::string description() =0;
	
};

