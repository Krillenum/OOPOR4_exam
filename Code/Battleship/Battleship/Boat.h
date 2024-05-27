#pragma once
#include "PlayerInfo.h"
#include "Tile.h"

struct Boat
{
	int length;
	class Tile* origin;
	bool dirRight;
	bool intact;
	bool destroyed;
	PlayerInfo* owner;
};