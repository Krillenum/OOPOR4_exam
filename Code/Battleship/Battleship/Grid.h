#pragma once
#include "Tile.h"
#include "BoatManager.h"

struct DoubleArray
{
	Tile* arr[10][10];
};

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
	DoubleArray GetPlayerGrid();
	void SetPlayerHistory(Tile* newGrid[10][10]);
	DoubleArray GetPlayerHistory();
	void SetBotGrid(Tile* newGrid[10][10]);
	DoubleArray GetBotGrid();
	void SetBotHistory(Tile* newGrid[10][10]);
	DoubleArray GetBotHistory();
	BoatManager* GetBoatManager();

private:
	// PRIVATE VARIABLES
	DoubleArray playerGrid;
	DoubleArray playerHistory;
	DoubleArray botGrid;
	DoubleArray botHistory;

	BoatManager* bm;

	// PRIVATE FUNCTION
	void initializeGrid(DoubleArray grid);
};