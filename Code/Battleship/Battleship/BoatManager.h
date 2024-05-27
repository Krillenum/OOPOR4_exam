#pragma once
#include "Boat.h"

class BoatManager
{
public:
	// PUBLIC FUNCTION -------------------
	Boat* Init();
	void PlaceBoat();
	void MoveBoat();
	void RotateBoat();
	void DestroyBoat();
	void DamageBoat();

	// Getters and Setters
	void SetPlayerBoats(Boat* newBoats[5]);
	Boat* GetPlayerBoats();
	void SetBotBoats(Boat* newBoats[5]);
	Boat* GetBotBoats();

private:
	// PRIATE VARIABLES
	Boat* PlayerBoats[5];
	Boat* BotBoats[5];
};

