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
	struct DoubleArray& GetPlayerGrid();
	struct DoubleArray& GetPlayerHistory();
	struct DoubleArray& GetBotGrid();
	struct DoubleArray& GetBotHistory();
	class BoatManager* GetBoatManager();

private:
	// PRIVATE VARIABLES
	struct DoubleArray playerGrid;
	struct DoubleArray playerHistory;
	struct DoubleArray botGrid;
	struct DoubleArray botHistory;

	class BoatManager* bm;

	// PRIVATE FUNCTION
	void initializeGrid(DoubleArray& grid);
};