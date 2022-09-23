#pragma once
#include <vector>

#include "../Enums/Enums.h"

namespace Heroes
{
    class Hero
    {
    public:
 Enums::HeroName HeroName;
        std::vector<HeroLevel> HeroLevels;
    };
}
