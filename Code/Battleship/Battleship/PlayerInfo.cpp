#include "PlayerInfo.h"

PlayerInfo::PlayerInfo(bool isBot)
{
	bot = isBot;
	PowerAquired = 0;
	RemainingBoats = 5;
}

int PlayerInfo::GetRemainingBoats()
{
	return 0;
}

void PlayerInfo::IncrementRemainingBoats()
{
}

void PlayerInfo::ReduceRemainingBoats()
{
}

int PlayerInfo::GetPoweAquired()
{
	return 0;
}

void PlayerInfo::IncrementPowerAquired()
{
}
