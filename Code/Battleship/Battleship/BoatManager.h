#pragma once
#include "Boat.h"
#include "Coordinate.h"
#include "2DArray.h"

class BoatManager
{
public:
	// PUBLIC FUNCTION -------------------
	Boat* Init();
	void PlaceBoat(Boat boat, coordinate boatxy, DoubleArray grid);
	void RemoveBoat(Boat boat, DoubleArray grid);
	void RotateBoat();
	void DestroyBoat();
	void DamageBoat();

	// Getters and Setters
	void SetPlayerBoats(Boat* newBoats[6]);
	Boat* GetPlayerBoats();
	void SetBotBoats(Boat* newBoats[6]);
	Boat* GetBotBoats();

private:
	// PRIATE VARIABLES
	Boat* PlayerBoats[6];
	Boat* BotBoats[6];
};

