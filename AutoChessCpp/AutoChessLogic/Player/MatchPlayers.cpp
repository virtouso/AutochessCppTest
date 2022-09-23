#include "MatchPlayers.h"

void MatchPlayers::Add(char* userId, MatchPlayer* matchPlayer)
{
    Players.insert(std::pair<char*, MatchPlayer*>(userId, matchPlayer));
}

MatchPlayer* MatchPlayers::GetPlayer(char* userId) const
{
    return  Players.find(userId)->second;
}
