#pragma once
#include "../Enums/Enums.h"

using namespace  Enums;

namespace Card
{
    class Card
    {
    public:
        char* CardUniqueId;
        Rarity Rarity;
        CardType CardType;
        int AddingExperience;
    };
}