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
	//tempGrid[6][2]->SetHit(true);
	//tempGrid[2][8]->SetHit(true);
	//Boat newBoat = { 2, tempGrid[2][8], true, true, true, nullptr };
	//tempGrid[2][8]->SetBoat(&newBoat);
	//tempGrid[4][7] = new MovementTile(bm);
	// TEST ------------------------
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

void Grid::SetPlayerGrid(Tile* newGrid[10][10])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			playerGrid.arr[i][j] = newGrid[i][j];
		}
	}
}

DoubleArray Grid::GetPlayerGrid()
{
	return playerGrid;
}

void Grid::SetPlayerHistory(Tile* newGrid[10][10])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			playerHistory.arr[i][j] = newGrid[i][j];
		}
	}
}

DoubleArray Grid::GetPlayerHistory()
{
	return playerHistory;
}

void Grid::SetBotGrid(Tile* newGrid[10][10])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			botGrid.arr[i][j] = newGrid[i][j];
		}
	}
}

DoubleArray Grid::GetBotGrid()
{
	return botGrid;
}

void Grid::SetBotHistory(Tile* newGrid[10][10])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			botHistory.arr[i][j] = newGrid[i][j];
		}
	}
}

DoubleArray Grid::GetBotHistory()
{
	return botHistory;
}

BoatManager* Grid::GetBoatManager()
{
	return nullptr;
}

void Grid::initializeGrid(DoubleArray grid)
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			grid.arr[i][j] = new Tile;
		}
	}
}
