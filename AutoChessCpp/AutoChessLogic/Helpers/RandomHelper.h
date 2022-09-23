#pragma once
#include <random>

class IRandomHelper
{
public:
    virtual ~IRandomHelper() = default;
private:
    virtual bool CheckDodgeResult(int dodgeChance) =0;
    virtual int FindRandomInRange(int min, int max) =0;
};


class RandomHelper : public IRandomHelper
{
public:
    ~RandomHelper() override;

    bool CheckDodgeResult(int dodgeChance) override;
    int FindRandomInRange(int min, int max) override;


    
};
