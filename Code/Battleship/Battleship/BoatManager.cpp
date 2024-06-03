#include "BoatManager.h"

BoatManager::BoatManager() {
    for (int i = 0; i < 6; ++i) {
        PlayerBoats[i] = nullptr;
        BotBoats[i] = nullptr;
    }
}

BoatManager::~BoatManager() {
    for (int i = 0; i < 6; ++i) {
        delete PlayerBoats[i];
        delete BotBoats[i];
    }
}

void BoatManager::PlaceBoat(Boat* b, coordinate c, DoubleArray grid)
{
    b->origin = c;

    for (int i = 0; i < (b->length); i++) {
        int temp;
        if (b->dirRight) {
            temp = c.y + i;
            grid.arr[c.x][temp]->SetBoat(b);
        }
        else {
            temp = c.x + i;
            grid.arr[temp][c.y]->SetBoat(b);
        }
    }

}

void BoatManager::RemoveBoat(Boat* b, DoubleArray grid)
{
    coordinate BoatOrigin = b->origin;

    for (int i = 0; i < (b->length); i++) {
        int temp;
        if (b->dirRight) {
            temp = BoatOrigin.y + i;
            grid.arr[BoatOrigin.x][temp]->SetBoat(nullptr);
        }
        else {
            temp = BoatOrigin.x + i;
            grid.arr[temp][BoatOrigin.y]->SetBoat(nullptr);
        }
    }
}


void BoatManager::RotateBoat()
{
}

void BoatManager::DestroyBoat()
{
}

void BoatManager::DamageBoat()
{
}

void BoatManager::SetPlayerBoats(Controller c, PlayerInfo* owner, struct DoubleArray grid)
{
    coordinate tempC = { 0, 0 };
    bool tempB;

    for (int i = 0; i < 5; i++) {
        Boat* temp = new Boat();
        bool validInput = true;
        int tempLength = (i + 2);
        temp->length = tempLength;
        while (validInput) {
            c.GetView()->PlaceBoatInstruction(temp->length);
            c.GetView()->AskBool();
            c.GetInputBool(tempB);
            temp->dirRight = tempB;
            c.GetView()->AskCoordinateMove();
            c.GetInputCoordinate(tempC);
            if (tempB && ((tempC.y + (tempLength - 1)) >= 10)) {
                c.GetView()->InvalidInput();
            }
            else if (!tempB && ((tempC.x + (tempLength - 1)) >= 10)){
                c.GetView()->InvalidInput();
            }
            else {
                validInput = false;
            }
        }
        temp->origin = tempC;
        temp->intact = true;
        temp->destroyed = false;
        temp->owner = owner;
        PlayerBoats[i] = temp;
        PlaceBoat(PlayerBoats[i], tempC, grid);
        c.GetView()->ClearDisplay();
    }
}

Boat* BoatManager::GetPlayerBoats(int index)
{
    return PlayerBoats[index];
}

void BoatManager::SetBotBoats(Boat* newBoats[6])
{
    // Set Bot Boats
}

Boat* BoatManager::GetBotBoats(int index)
{
    return BotBoats[index];
}
