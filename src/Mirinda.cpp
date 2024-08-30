#include "Beverage.h"
#include <iostream>
using namespace std;

string Mirinda::description() {
    return "Mirinda";
}

void Mirinda::setmName(string mname) {
    this->mname = mname;
}

void Mirinda::setQuantity(string quantity) { 
    this->quantity = quantity;
}

void Mirinda::setSize(string size) {
    this->size = size;
}

bool Mirinda::initialize() {
    cout << "Initializing Beverage: " << mname << ", Quantity: " << quantity << ", Size: " << size << endl;
    return true;
}

