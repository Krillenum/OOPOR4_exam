#include "Controller.h"
#include "string.h"

Controller::Controller(Model* model, View* view)
{
	m = model;
	v = view;
	bot = nullptr;
}

void Controller::Setup()
{
}

void Controller::PlayGame()
{
	// Setup of the game

	while (!m->GetGameOver()) {
		m->SetCurrentPlayer();
		
		// Playing the game

	}

	ExitGame();
}

void Controller::removeWhiteSpace(string& inputLine) {
	int count = 0;
	int i = 0;

	while (inputLine[i++] == ' ') count++;

	inputLine.erase(0, count);

	i = inputLine.length() - 1;
	count = 0;

	while (inputLine[i--] == ' ') count++;

	inputLine.erase(inputLine.length() - count, count);
}

bool Controller::ValidCoordinate(coordinate& coord)
{
	string inputLine;
	do {
		getline(cin, inputLine);
	} while (inputLine == "");

	removeWhiteSpace(inputLine);

	stringstream inputStream(inputLine);

	bool fail1 = (inputStream >> coord.x).fail();
	bool fail2 = (inputStream >> coord.y).fail();
	bool fail3 = inputStream.peek() != EOF;

	return !fail1 && !fail2 && !fail3;
}

bool Controller::GetInputCoordinate(coordinate & coord) {

	while (!ValidCoordinate(coord)) { cout << "Wrong input, retry" << endl; };

	coord.x--;
	coord.y--;

	return (coord.x != -1 || coord.y != -1);
}

bool Controller::ValidBool(bool& b) 
{
	string inputLine;
	do {
		getline(cin, inputLine);
	} while (inputLine == "");

	removeWhiteSpace(inputLine);

	stringstream inputStream(inputLine);

	bool fail1 = (inputStream >> b).fail();
	bool fail2 = inputStream.peek() != EOF;

	return !fail1 && !fail2;
}

bool Controller::GetInputBool(bool& b)
{
	while (!ValidBool(b)) { cout << "Wrong input, retry" << endl; };

	return b;
}

void Controller::ExitGame()
{
}

View* Controller::GetView()
{
	return v;
}

BotAI* Controller::GetBot()
{
	return nullptr;
}
