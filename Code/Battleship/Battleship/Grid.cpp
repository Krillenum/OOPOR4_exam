#include "Grid.h"

#include "Boat.h"	// TEMP

Grid::Grid()
{
	BoatManager newBoatManager;
	bm = &newBoatManager;

	initializeGrid(playerGrid);
	initializeGrid(playerHistory);
	initializeGrid(botGrid);
	initializeGrid(botHistory);

	// TEST --------------------------
	playerGrid.arr[1][0]->SetHit(true);
	playerGrid.arr[2][8]->SetHit(true);
	// TEST ------------------------
}

Grid::~Grid()
{
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			delete playerGrid.arr[i][j];
			delete playerHistory.arr[i][j];
			delete botGrid.arr[i][j];
			delete botHistory.arr[i][j];
		}
	}
}

void Grid::TileReaction()
{
}

void Grid::UpdateTile()
{
}

void Grid::PlaceSpecialTile()
{
}

//void Grid::SetPlayerGrid(Tile* newGrid[10][10])		DEPRECATED
//{
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			playerGrid.arr[i][j] = newGrid[i][j];
//		}
//	}
//}

DoubleArray& Grid::GetPlayerGrid()
{
	return playerGrid;
}

DoubleArray& Grid::GetPlayerHistory()
{
	return playerHistory;
}

DoubleArray& Grid::GetBotGrid()
{
	return botGrid;
}

DoubleArray& Grid::GetBotHistory()
{
	return botHistory;
}

BoatManager* Grid::GetBoatManager()
{
	return nullptr;
}

void Grid::initializeGrid(DoubleArray& grid)
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			Tile* temp = new Tile;
			grid.arr[i][j] = temp;
		}
	}
}