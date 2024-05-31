#include "BoatManager.h"

Boat* BoatManager::Init()
{
    return nullptr;
}

void BoatManager::PlaceBoat(Boat b, coordinate c, DoubleArray grid)
{
    b.origin = c;

    for (int i = 0; i < (b.length); i++) {
        int temp;
        if (b.dirRight) {
            temp = c.y + i;
            grid.arr[c.x][temp]->SetBoat(&b);
        }
        else {
            temp = c.x + i;
            grid.arr[temp][c.y]->SetBoat(&b);
        }
    }

}

void BoatManager::RemoveBoat(Boat b, DoubleArray grid)
{
    coordinate BoatOrigin = b.origin;

    for (int i = 0; i < (b.length); i++) {
        int temp;
        if (b.dirRight) {
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

void BoatManager::SetPlayerBoats(Boat* newBoats[6])
{
}

Boat* BoatManager::GetPlayerBoats()
{
    return nullptr;
}

void BoatManager::SetBotBoats(Boat* newBoats[6])
{
}

Boat* BoatManager::GetBotBoats()
{
    return nullptr;
}
