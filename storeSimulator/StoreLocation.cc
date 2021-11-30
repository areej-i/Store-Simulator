#include "StoreLocation.h"
#include <iostream>

using namespace std;

StoreLocation::StoreLocation():Location(code,++nextId){}
int StoreLocation::nextId = 0;

void StoreLocation::setProduct(string name){
   Location::product = name;
}

int StoreLocation::getFreeSpace(){
    return (capacity - quantity);
}

int StoreLocation::getCapacity(){
    return capacity;
}

bool StoreLocation::add(string name, int q){
    product = name;
    if (getFreeSpace() >= q){
        quantity = quantity + q;
        return true;
    }
    return false;
}

bool StoreLocation::remove(int q){
    if (q <= Location::getQuantity()){
        Location::quantity = Location::quantity - q;
        return true;
    }
    return false;
}

void StoreLocation::print(){
    Location::print();
}