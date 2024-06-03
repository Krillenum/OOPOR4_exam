#pragma once
#include "Boat.h"
#include "Coordinate.h"
#include "2DArray.h"
#include "Controller.h"
#include "PlayerInfo.h"

class BoatManager
{
public:
	// PUBLIC FUNCTION -------------------
	BoatManager();
	~BoatManager();
	void PlaceBoat(struct Boat* boat, struct coordinate boatxy, struct DoubleArray grid);
	void RemoveBoat(struct Boat* boat, struct DoubleArray grid);
	void RotateBoat();
	void DestroyBoat();
	void DamageBoat();

	// Getters and Setters
	void SetPlayerBoats(class Controller c, class PlayerInfo* owner, struct DoubleArray grid);
	struct Boat* GetPlayerBoats(int index);
	void SetBotBoats(struct Boat* newBoats[6]);
	struct Boat* GetBotBoats(int index);

private:
	// PRIATE VARIABLES
	struct Boat* PlayerBoats[6];
	struct Boat* BotBoats[6];
};

