#include "Beverage.h"

string Coca::description() {
    return "Coca";
}

void Coca::setmName(string mname) {
    this->mname = mname;
}

void Coca::setQuantity(string quantity) { 
    this->quantity = quantity;
}

void Coca::setSize(string size) {
    this->size = size;
}

bool Coca::initialize() {
    cout << "Initializing Beverage: " << mname << ", Quantity: " << quantity << ", Size: " << size << endl;
    return true;
}

