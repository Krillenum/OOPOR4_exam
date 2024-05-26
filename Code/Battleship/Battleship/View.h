#pragma once
#include "Model.h"

class View
{
public:
	// PUBLIC FUNCTION -------------------
	View(Model* model);
	void DisplayText();
	void GridDisplay();
	void ClearDisplay();

private:
	Model* m;

};