#pragma once
#include "Model.h"
#include <Windows.h>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

class View
{
public:
	// PUBLIC FUNCTION -------------------
	View(class Model* model);
	void DisplayText();
	void GridDisplay();
	void ClearDisplay();
	void SpaceBetweenGrid();
	void ColorTest();
	void AskCoordinateMove();
	void AskBool();
	void PlaceBoatInstruction(int length);
	void InvalidInput();

private:
	class Model* m;
	HANDLE hConsole;
};

/* COLOR SCHEME INT:
	26 -> own boat
	20 -> shot and miss
	31 -> no shot
	64 -> shot and hit
	 7 -> default color (black background, white foreground)
*/