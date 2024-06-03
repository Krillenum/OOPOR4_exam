#pragma once
#include "PlayerInfo.h"
#include "Grid.h"

class Model
{
public:
	// PUBLIC FUNCTION -------------------
	
	// Setup function
	Model();
	~Model();
	void PlaceAllBoats(class Controller c);

	// Ingame function
	void TileShot();
	void CheckGameState();

	// Getters and Setters
	bool GetGameOver();
	void SetGameOver(bool GameState);
	class PlayerInfo* GetPlayer();
	class PlayerInfo* GetBot();
	class PlayerInfo* GetCurrentPlayer();
	void SetCurrentPlayer();
	class Grid* GetGrid();

private:
	// PRIVATE VARIABLES

	// Difficulty setting
	bool shotHistory;

	// Game state
	bool gameOver;

	// Information saved for both players (human & AI), as well as who is playing during this specific turn
	class PlayerInfo* player;
	class PlayerInfo* bot;
	class PlayerInfo* currentPlayer;

	// grid
	class Grid* grid;
};

