#include "View.h"
#include <iostream>
#include <string>

using namespace std;

View::View(Model* model)
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}

void View::DisplayText()
{
}

void View::GridDisplay(DoubleArray grid)
{
	/*string TempGrid[10][10] = {
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"},
	{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"}
	};*/

	// First row with indexes
	SetConsoleTextAttribute(hConsole, 7);
	for (int i = 0; i <= 10; i++) {
		cout.width(3);
		cout << i << " ";
	}
	
	cout << endl;

	for (int i = 0; i < 10; i++) {
		SetConsoleTextAttribute(hConsole, 7);
		cout.width(3);
		cout << (i + 1) << " ";
		for (int j = 0; j < 10; j++) {
			if (grid.arr[i][j] = nullptr) {
				SetConsoleTextAttribute(hConsole, 64);
				cout.width(4);
				cout << "FUCK ";
			}
			else if ((grid.arr[i][j]->GetHit()) && ((grid.arr[i][j]->GetBoat() != nullptr) || (grid.arr[i][j]->GetSpecialTile()))) {
				// tile got hit and contained something.
				SetConsoleTextAttribute(hConsole, 64);
				cout.width(4);
				cout << "X ";
			}
			else if(grid.arr[i][j]->GetHit()){
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
		cout << endl;
	}
}

void View::ClearDisplay()
{
	SetConsoleTextAttribute(hConsole, 7);
	if (system("CLS")) system("clear");
}
