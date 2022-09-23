#pragma once
#include <vector>

#include "MatchPlayers.h"
#include "../MatchEntities/MatchHero.h"
#include "Models/PlayerEnum.h"

class MatchPlayer
{
public:
    char* UserId;
    PlayerSide Side;

    std::vector<MatchHero*> MyFieldHeroes;
    std::vector<MatchHero*> MyDeckHeroes;

    
    bool CheckAllMyHeroesAreDead();
    int AddHeroToMyDeck(MatchHero* hero);
    void MoveHeroFromDeckToField(MatchHero* hero);
    void SimulateOneStep(int stepNumber,MatchPlayers players, char*  loserId);


    
};
