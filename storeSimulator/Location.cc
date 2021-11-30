#include "Location.h"
#include <iostream>
#include <sstream>

using namespace std;

Location::Location(char code, int number){
    string a = code+to_string(number);
    this->id = a;
    product = NONE;
    quantity = 0;
}
const string Location::NONE = "empty";
Location::~Location() {}
string Location::getId(){
    return id;
}

string Location::getProduct(){
    return product;
}

int Location::getQuantity(){
    return quantity;
}

bool Location::isEmpty(){
    return (quantity == 0);
}
bool Location::isAvailable(){
    return (product == NONE);
}

void Location::print(){
    cout << endl << "Id: " << id;
    cout << endl << "Product: " << product;
    cout << endl << "Quantity: " << quantity <<endl;
}