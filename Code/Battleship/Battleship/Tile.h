#pragma once
#include "BoatManager.h"

class Tile
{
public:
	// PUBLIC FUNCTION -------------------
	Tile();
	virtual void SpecialEffect();

	// Getters and Setters
	bool GetHit();
	void SetHit(bool shot);
	bool GetSpecialTile();
	struct Boat* GetBoat();
	void SetBoat(struct Boat* newBoat);

protected:
	// Protected variables
	bool hit;
	struct Boat* boat;
	bool specialTile = false;
};

class RotationTile : public Tile 
{
public:
	// Public function
	RotationTile(class BoatManager* boatManager) : Tile() { specialTile = true; bm = boatManager; };
	void SpecialEffect();

	//Getters and setters
	class BoatManager* GetBoatManager();

private:
	class BoatManager* bm;
};

class AngelTile : public Tile
{
public:
	// Public function
	AngelTile(class BoatManager* boatManager) : Tile() { specialTile = true; bm = boatManager; };
	void SpecialEffect();

	//Getters and setters
	class BoatManager* GetBoatManager();

private:
	class BoatManager* bm;
};

class MovementTile : public Tile
{
public:
	// Public function
	MovementTile(class BoatManager* boatManager) : Tile() { specialTile = true; bm = boatManager; };
	void SpecialEffect();

	//Getters and setters
	class BoatManager* GetBoatManager();

private:
	class BoatManager* bm;
};

class PowerTile : public Tile
{
	void SpecialEffect();
};

class MineTile : public Tile
{
	void SpecialEffect();
};