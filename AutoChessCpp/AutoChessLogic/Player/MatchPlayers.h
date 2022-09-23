#pragma once
#include <map>

#include "MatchPlayer.h"

class MatchPlayers
{
public:
    std::map<char*, MatchPlayer*> Players;
    void Add(char* userId, MatchPlayer* matchPlayer);
     MatchPlayer* GetPlayer(char* userId) const;
};
