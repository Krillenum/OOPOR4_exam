#pragma once
#include "Tile.h"
#include "BoatManager.h"

class Grid
{
public:
	// PUBLIC FUNCTION -------------------
	Grid();
	void TileReaction();
	void UpdateTile();
	void PlaceSpecialTile();

	// Getters and Setters
	void SetPlayerGrid(Tile* newGrid[10][10]);
	Tile* GetPlayerGrid();
	void SetPlayerHistory(Tile* newGrid[10][10]);
	Tile* GetPlayerHistory();
	void SetBotGrid(Tile* newGrid[10][10]);
	Tile* GetBotGrid();
	void SetBotHistory(Tile* newGrid[10][10]);
	Tile* GetBotHistory();
	BoatManager* GetBoatManager();

private:
	// PRIVATE VARIABLES
	Tile* playerGrid[10][10];
	Tile* playerHistory[10][10];
	Tile* botGrid[10][10];
	Tile* botHistory[10][10];
	BoatManager* bm;
};

