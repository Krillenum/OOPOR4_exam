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

    //v.GridDisplay(m.GetGrid()->GetPlayerGrid());
    cout << m.GetGrid()->GetPlayerGrid().arr[0][0]->GetHit();

    cin.get(); // wait

    cout << "next step";

    v.ClearDisplay();

    cin.get(); // wait

    return 0;
}