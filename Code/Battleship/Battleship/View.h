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
	View(Model* model);
	void DisplayText();
	void GridDisplay(DoubleArray grid);
	void ClearDisplay();

private:
	Model* m;
	HANDLE hConsole;
};

/* COLOR SCHEME INT:
	20 -> shot and miss
	31 -> no shot
	64 -> shot and hit
	 7 -> default color (black background, white foreground)
*/