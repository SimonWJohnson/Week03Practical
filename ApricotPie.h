#pragma once
#include "Pie.h"
#include <iostream>

class ApricotPie : public Pie
{
	public:
		std::string description() override;
};

