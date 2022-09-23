#include "MatchPlayer.h"

#include "../../SharedModels/Enums/Enums.h"

bool MatchPlayer::CheckAllMyHeroesAreDead()
{
    for (auto element : MyFieldHeroes)
    {
        if (element->IsDead())
        {
            return true;
        }
    }
    return false;
}

int MatchPlayer::AddHeroToMyDeck(MatchHero* hero)
{
    MyDeckHeroes.emplace_back(hero);
}

void MatchPlayer::MoveHeroFromDeckToField(MatchHero* hero)
{
    for (int i=0; i<MyDeckHeroes.size();i++)
    {
        if (MyDeckHeroes[i]==hero)
        {
            MyDeckHeroes.erase(MyDeckHeroes.begin()+i);
            MyFieldHeroes.emplace_back(hero);
            return;
        }
    }
}

void MatchPlayer::SimulateOneStep(int stepNumber, MatchPlayers players, char* loserId)
{
    for (auto element : MyFieldHeroes)
    {
        element->SimulateOneStep(stepNumber,players,loserId);
    }
    
}
