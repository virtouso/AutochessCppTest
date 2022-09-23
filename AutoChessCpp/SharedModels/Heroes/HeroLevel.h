#pragma once
#include "ActionNames.h"
#include "../Enums/Enums.h"

class HeroLevel
{
public:
    Enums::HeroName HeroName;
    int Level;
    int NeededExperienceToLevel;
    HeroStats Stats;

    Heroes::ActionNames AbilityActionName;
    Heroes::ActionNames AttackActionName;
};
