#pragma once
#include "Tile.h"
#include "BoatManager.h"
#include "2DArray.h"

class Grid
{
public:
	// PUBLIC FUNCTION -------------------
	Grid();
	~Grid();
	void TileReaction();
	void UpdateTile();
	void PlaceSpecialTile();

	// Getters and Setters
	// void SetPlayerGrid(Tile* newGrid[10][10]); DEPRECATED
	DoubleArray& GetPlayerGrid();
	DoubleArray& GetPlayerHistory();
	DoubleArray& GetBotGrid();
	DoubleArray& GetBotHistory();
	BoatManager* GetBoatManager();

private:
	// PRIVATE VARIABLES
	DoubleArray playerGrid;
	DoubleArray playerHistory;
	DoubleArray botGrid;
	DoubleArray botHistory;

	BoatManager* bm;

	// PRIVATE FUNCTION
	void initializeGrid(DoubleArray& grid);
};