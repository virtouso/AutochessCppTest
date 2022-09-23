#pragma once

class MatchPlayers;

class MatchHero
{
public:
    void SimulateOneStep(int stepNumber, MatchPlayers players, char* loserId);
};
