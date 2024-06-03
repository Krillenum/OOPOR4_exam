#pragma once
#include "Model.h"
#include "View.h"
#include "BotAI.h"
#include <string>
#include <iostream>
#include <sstream>
#include "Coordinate.h"

using namespace std;

class Controller
{
public:
	// PUBLIC FUNCTION -------------------
	Controller(class Model* model, class View* view);
	void Setup();
	void PlayGame();
	void removeWhiteSpace(string& inputLine);
	bool ValidCoordinate(struct coordinate& coord);
	bool GetInputCoordinate(struct coordinate& coord);
	bool ValidBool(bool& b);
	bool GetInputBool(bool& b);
	void ExitGame();
	class View* GetView();

	// Getters and Setters
	class BotAI* GetBot();

private:
	// PRIATE VARIABLES
	class Model* m;
	class View* v;
	class BotAI* bot;
};

