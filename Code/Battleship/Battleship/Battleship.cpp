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

    v.ClearDisplay();

    cin.get(); // wait

    v.ClearDisplay();
    m.GetGrid()->GetBoatManager()->SetPlayerBoats(c, m.GetPlayer(), m.GetGrid()->GetPlayerGrid());

    cin.get(); // wait

    return 0;
}