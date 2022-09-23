#pragma once


class IHeroMoveActionFactory
{
public:
    IHeroMoveAction GetNewMoveAction();
};

class HeroMoveFactory: public IHeroMoveActionFactory
{
public:
    
};
