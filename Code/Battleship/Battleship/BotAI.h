#pragma once
#include "Model.h"
#include "BotStrategy.h"

class BotAI
{
public:
	// PUBLIC FUNCTION -------------------
	BotAI(Model* model);
	void CallShoot();
	void RandomMove();
	void RandomRotate();
	void RandomRevive();

	// Getters and Setters
	BotStrategy* GetDifficulty();

private:
	// PRIATE VARIABLES
	BotStrategy* difficulty;
	Model* m;

};

