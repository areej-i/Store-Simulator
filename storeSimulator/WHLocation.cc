#include "WHLocation.h"
#include <iostream>

using namespace std;

WHLocation::WHLocation():Location(code,++nextId){}
int WHLocation::nextId = 0;

int WHLocation::getCapacity(){
    return capacity;
}

bool WHLocation::add(string name, int q){
    if (isAvailable() && ((quantity + q) <= capacity))
    {
        product = name;
        quantity = quantity + q;
        return true;
    }
    return false;
}

bool WHLocation::remove(int q){
    if (q <= Location::getQuantity()){
        Location::quantity = Location::quantity - q;
        if (Location::quantity == 0)
            product = NONE;
        return true;
    }
    return false;
}

void WHLocation::print(){
    Location::print();
}