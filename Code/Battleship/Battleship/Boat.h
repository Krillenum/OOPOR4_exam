#pragma once
#include "Tile.h"
#include "PlayerInfo.h"

struct Boat
{
	int length;
	Tile* origin;
	bool dirRight;
	bool intact;
	bool destroyed;
	PlayerInfo owner;
};