#include "RandomHelper.h"

RandomHelper::~RandomHelper()
{
    
}

bool RandomHelper::CheckDodgeResult(int dodgeChance)
{
    auto random= 0 + ( std::rand() % ( 100 - 0 + 1 ) );

    return random<= dodgeChance;
}

int RandomHelper::FindRandomInRange(int min, int max)
{
    return min + ( std::rand() % ( max - min + 1 ) );
}
