#include "Beverage.h"
#include <iostream>
using namespace std;

string Pessi::description() {
    return "Pessi";
}

void Pessi::setmName(string mname) {
    this->mname = mname;
}

void Pessi::setQuantity(string quantity) { 
    this->quantity = quantity;
}

void Pessi::setSize(string size) {
    this->size = size;
}

bool Pessi::initialize() {
    cout << "Initializing Beverage: " << mname << ", Quantity: " << quantity << ", Size: " << size << endl;
    return true;
}

