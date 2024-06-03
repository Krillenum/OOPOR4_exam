#pragma once
#include "Model.h"
#include "BotStrategy.h"

class BotAI
{
public:
	// PUBLIC FUNCTION -------------------
	BotAI(class Model* model);
	void CallShoot();
	void RandomMove();
	void RandomRotate();
	void RandomRevive();

	// Getters and Setters
	class BotStrategy* GetDifficulty();

private:
	// PRIATE VARIABLES
	class BotStrategy* difficulty;
	class Model* m;

};

