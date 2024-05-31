#include <iostream>
#include <Windows.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"

#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

#include <string>

using namespace std;

int main()
{
    Model m;
    View v(&m);
    Controller c(&m, &v);

    //v.ColorTest();
    //cout << endl;

    v.GridDisplay();

    cout << endl << m.GetGrid()->GetPlayerGrid().arr[0][0]->GetHit();

    cin.get(); // wait

    v.ClearDisplay();

    coordinate coord = { 5, 5 };
    Boat b = { 4, coord, false, true, false, nullptr };

    //int length;
    //coordinate origin;
    //bool dirRight;
    //bool intact;
    //bool destroyed;
    //PlayerInfo* owner;

    m.GetGrid()->GetBoatManager()->PlaceBoat(b, coord, m.GetGrid()->GetPlayerGrid());
    v.GridDisplay();

    cin.get(); // wait

    return 0;
}

//void TicTacToeModel::_switchPlayer() {
//    nextPlayer = (nextPlayer == 'x') ? 'o' : 'x';
//}