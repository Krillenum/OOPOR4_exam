#pragma once
#include "Model.h"
#include "View.h"
#include "BotAI.h"
#include "string.h"

class Controller
{
public:
	// PUBLIC FUNCTION -------------------
	Controller(Model* model, View* view);
	void Setup();
	void PlayGame();
	string GetPlayerInput();
	void ExitGame();

	// Getters and Setters
	BotAI* GetBot();

private:
	// PRIATE VARIABLES
	Model* m;
	View* v;
	BotAI* bot;
};

