
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

void Model::PlaceAllBoats(Controller c)
{
	grid->GetBoatManager()->SetPlayerBoats(c, GetPlayer(), grid->GetPlayerGrid());
	// Set bot boats too
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

void Model::SetCurrentPlayer()
{
	currentPlayer = (currentPlayer == player) ? bot : player;
}

Grid* Model::GetGrid()
{
	return grid;
}
