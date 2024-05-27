#include "Tile.h"
#include "Boat.h"

void RotationTile::SpecialEffect()
{
}

BoatManager* RotationTile::GetBoatManager()
{
	return bm;
}

void AngelTile::SpecialEffect()
{
}

BoatManager* AngelTile::GetBoatManager()
{
	return bm;
}

void MovementTile::SpecialEffect()
{
}

BoatManager* MovementTile::GetBoatManager()
{
	return bm;
}

void PowerTile::SpecialEffect()
{
}

void MineTile::SpecialEffect()
{
}

Tile::Tile()
{
	hit = false;
	boat = nullptr;
}

void Tile::SpecialEffect()
{
}

bool Tile::GetHit()
{
	return hit;
}

void Tile::SetHit(bool shot)
{
	hit = shot;
}

bool Tile::GetSpecialTile()
{
	return specialTile;
}

Boat* Tile::GetBoat()
{
	return boat;
}

void Tile::SetBoat(Boat* newBoat)
{
	boat = newBoat;
}
