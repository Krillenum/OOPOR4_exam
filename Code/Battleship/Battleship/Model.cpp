
#include "Model.h"

Model::Model()
{
	grid = new Grid();
	gameOver = false;
	shotHistory = true;

	player = nullptr;
	bot = nullptr;
	currentPlayer = nullptr;
}

Model::~Model()
{
	delete grid;
}

void Model::PlaceAllBoats()
{
}

void Model::TileShot()
{
}

void Model::CheckGameState()
{
}

bool Model::GetGameOver()
{
	return gameOver;
}

void Model::SetGameOver(bool GameState)
{
	gameOver = GameState;
}

PlayerInfo* Model::GetPlayer()
{
	return nullptr;
}

PlayerInfo* Model::GetBot()
{
	return nullptr;
}

PlayerInfo* Model::GetCurrentPlayer()
{
	return nullptr;
}

Grid* Model::GetGrid()
{
	return grid;
}
