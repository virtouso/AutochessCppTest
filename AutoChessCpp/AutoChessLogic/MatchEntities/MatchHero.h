#pragma once

class MatchPlayers;

class MatchHero
{
public:
   bool IsDead();
    void SimulateOneStep(int stepNumber, MatchPlayers players, char* loserId);
};
