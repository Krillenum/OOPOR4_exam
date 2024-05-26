#pragma once
#include "PlayerInfo.h"
#include "Grid.h"

class Model
{
public:
	// PUBLIC FUNCTION -------------------
	
	// Setup function
	Model();
	void Init();
	void PlaceAllBoats();

	// Ingame function
	void TileShot();
	void CheckGameState();

	// Getters and Setters
	bool GetGameOver();
	void SetGameOver(bool GameState);
	PlayerInfo* GetPlayer();
	PlayerInfo* GetBot();
	PlayerInfo* GetCurrentPlayer();
	Grid* GetGrid();

private:
	// PRIVATE VARIABLES

	// Difficulty setting
	bool shotHistory;

	// Game state
	bool gameOver;

	// Information saved for both players (human & AI), as well as who is playing during this specific turn
	PlayerInfo* player;
	PlayerInfo* bot;
	PlayerInfo* currentPlayer;

	// grid
	Grid* grid;
};

