#include "Tile.h"

void RotationTile::SpecialEffect()
{
}

BoatManager* RotationTile::GetBoatManager()
{
	return nullptr;
}

void AngelTile::SpecialEffect()
{
}

BoatManager* AngelTile::GetBoatManager()
{
	return nullptr;
}

void MovementTile::SpecialEffect()
{
}

BoatManager* MovementTile::GetBoatManager()
{
	return nullptr;
}

void PowerTile::SpecialEffect()
{
}

void MineTile::SpecialEffect()
{
}

void Tile::SpecialEffect()
{
}

bool Tile::GetHit()
{
	return false;
}

void Tile::SetHit(bool shot)
{
}

Boat* Tile::GetBoat()
{
	return nullptr;
}

void Tile::SetBoat(Boat* newBoat)
{
}
