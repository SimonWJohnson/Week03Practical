#pragma once
#include "Pie.h"
#include <iostream>

class ApplePie : public Pie
{
    public:
        std::string description() override;
};

