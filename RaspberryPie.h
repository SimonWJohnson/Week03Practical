#pragma once
#include "Pie.h"
#include <iostream>

class RaspberryPie : public Pie
{
	public:
		std::string description() override;
};

