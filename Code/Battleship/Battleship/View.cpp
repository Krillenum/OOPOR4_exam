#include "View.h"
#include <iostream>
#include <string>

using namespace std;

View::View(Model* model)
{
	m = model;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}

void View::DisplayText()
{
}

void View::GridDisplay()
{
	DoubleArray tempGrid;
	DoubleArray tempHistory;

	// Get the correct grid and set them based on the player currently playing
	if (m->GetCurrentPlayer() == m->GetPlayer()) {
		tempHistory = m->GetGrid()->GetPlayerHistory();
		tempGrid = m->GetGrid()->GetPlayerGrid();
		SetConsoleTextAttribute(hConsole, 112);
		cout << "Player is playing" << endl << endl;
	}
	else {
		tempHistory = m->GetGrid()->GetBotHistory();
		tempGrid = m->GetGrid()->GetBotGrid();
		SetConsoleTextAttribute(hConsole, 112);
		cout << "Bot is playing" << endl << endl;
	}

	// First row with indexes
	SetConsoleTextAttribute(hConsole, 7);
	for (int i = 0; i <= 10; i++) {
		cout.width(3);
		cout << i << " ";
	}
	SpaceBetweenGrid();
	for (int i = 0; i <= 10; i++) {
		cout.width(3);
		cout << i << " ";
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {

		// Display index
		SetConsoleTextAttribute(hConsole, 7);
		cout.width(3);
		cout << (i + 1) << " ";

		// Display the tiles of the shoot history
		for (int j = 0; j < 10; j++) {
			if (tempHistory.arr[i][j]->GetHit() && (tempHistory.arr[i][j]->GetBoat() != nullptr)) {
				// tile got hit and contained something.
				SetConsoleTextAttribute(hConsole, 64);
				cout.width(4);
				cout << "X ";
			}
			else if(tempHistory.arr[i][j]->GetHit()){
				// tile got hit, nothing here.
				SetConsoleTextAttribute(hConsole, 20);
				cout.width(4);
				cout << "O ";
			}
			else {
				// tile not hit yet
				SetConsoleTextAttribute(hConsole, 31);
				cout.width(4);
				cout << "o ";
			}
		}

		SpaceBetweenGrid();

		// Display index
		SetConsoleTextAttribute(hConsole, 7);
		cout.width(3);
		cout << (i + 1) << " ";

		// Display tiles of the boat grid
		for (int j = 0; j < 10; j++) {
			if (tempGrid.arr[i][j]->GetBoat() != nullptr) {
				// tile got hit and contained something.
				SetConsoleTextAttribute(hConsole, 26);
				cout.width(4);
				cout << "B ";
			}
			else {
				// tile not hit yet
				SetConsoleTextAttribute(hConsole, 31);
				cout.width(4);
				cout << "o ";
			}
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 104; i++) {
		SetConsoleTextAttribute(hConsole, 7);
		cout << "-";
	}

	cout << endl;
}

void View::ClearDisplay()
{
	SetConsoleTextAttribute(hConsole, 7);
	if (system("CLS")) system("clear");
	GridDisplay();
}

void View::SpaceBetweenGrid()
{
	for (int i = 0; i < 5; i++) {
		cout.width(3);
		SetConsoleTextAttribute(hConsole, 7);

		if (i == 2) {
			cout << "|";
		}
		else {
			cout << " ";
		}
	}
}

void View::ColorTest()
{
	for (int k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		cout << k << " I want to be nice today!" << endl;
	}
}

void View::AskCoordinateMove()
{
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Entering a column (1 - 10) and a row (1 - 10) separated by white space." << endl;
	cout << "Cordinates example : 6 5" << endl;
	cout << "Type -1 -1 to abort " << endl;
	cout << ">";
}

void View::AskBool()
{
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Entering 0 (no) or 1 (yes)." << endl;
	cout << "Type -1 to abort " << endl;
	cout << ">";
}

void View::PlaceBoatInstruction(int length)
{
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Boat with a length of " << length << " needs to be placed." << endl;
	cout << "You need to enter the coordinate of the boats origin point and then choose a direction" << endl;
	cout << "The boat can spread from the origin point either toward the right (true) or downwards (false)" << endl;
}

void View::InvalidInput()
{
	SetConsoleTextAttribute(hConsole, 4);
	cout << "WARNING" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "The boat goes out of bound ! Please pay attention at the length of the boat when placing it." << endl;
}
