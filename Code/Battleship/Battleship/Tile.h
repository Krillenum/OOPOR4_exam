#pragma once
#include "Boat.h"
#include "BoatManager.h"

class Tile
{
public:
	// PUBLIC FUNCTION -------------------
	virtual void SpecialEffect();

	// Getters and Setters
	bool GetHit();
	void SetHit(bool shot);
	Boat* GetBoat();
	void SetBoat(Boat* newBoat);

protected:
	// Protected variables
	bool hit;
	Boat* boat;
};

class RotationTile : Tile 
{
public:
	// Public function
	void SpecialEffect();

	//Getters and setters
	BoatManager* GetBoatManager();

private:
	BoatManager* bm;
};

class AngelTile : Tile
{
public:
	// Public function
	void SpecialEffect();

	//Getters and setters
	BoatManager* GetBoatManager();

private:
	BoatManager* bm;
};

class MovementTile : Tile
{
public:
	// Public function
	void SpecialEffect();

	//Getters and setters
	BoatManager* GetBoatManager();

private:
	BoatManager* bm;
};

class PowerTile : Tile
{
	void SpecialEffect();
};

class MineTile : Tile
{
	void SpecialEffect();
};