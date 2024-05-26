#include <iostream>
#include <Windows.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"

using namespace std;

int main()
{
    HANDLE hConsole;
    int k;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int color;

    // you can loop k higher to see more color choices
    
    //for (k = 1; k < 255; k++)
    //{
    //    // pick the colorattribute k you want
    //    SetConsoleTextAttribute(hConsole, k);
    //    cout << k << " I want to be nice today!" << endl;
    //}
    //cout << " ";
    //
    //
    //for (k = 0; k < 6; k++)
    //{
    //    
    //    if (k == 4) {

    //        color = 73; // very red, for hits
    //    }
    //    else if (k == 2) {

    //        color = 20; // red, for miss
    //    }
    //    else {
    //        color = 31; // white, for empty
    //    }
    //    SetConsoleTextAttribute(hConsole, color);

    //    if (k == 4) {
    //        cout << "X " << endl;
    //    }
    //    else {
    //        cout << "o " << endl;
    //    }
    //}

    string sArray[5][5] = {
        {"o", "o", "o", "o", "o"},
        {"o", "X", "o", "o", "o"},
        {"o", "o", "o", "o", "o"},
        {"o", "o", "o", "X", "o"},
        {"o", "o", "o", "o", "o"}
    };

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            if (i == 4 && j == 0) {
                color = 20; // miss
            }
            else if (sArray[i][j] == "o") {
                color = 31; // No shot
            }
            else if (sArray[i][j] == "X") {
                color = 64; // HIT !
            }
            else {
                color = 31;
            }
            cout.width(2);
            SetConsoleTextAttribute(hConsole, color);
            cout << sArray[i][j] << " ";
        }
        cout << endl;
    }

    cin.get(); // wait
    return 0;
}

class Test 
{
protected:
    virtual void PrintStuff() { cout << "Yo, stuff"; }
};

class InheritTest : Test
{
protected:
    void PrintStuff() { cout << "inherit stuff"; }
};