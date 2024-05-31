#pragma once
class PlayerInfo
{
public:
	// PUBLIC FUNCTION --------------
	PlayerInfo(bool isBot);

	// Getters and Setters
	int GetRemainingBoats();
	void IncrementRemainingBoats();
	void ReduceRemainingBoats();
	int GetPoweAquired();
	void IncrementPowerAquired();

private:
	// PRIATE VARIABLES
	int RemainingBoats;
	int PowerAquired;
	bool bot;
};

