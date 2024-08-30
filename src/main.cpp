#include "Beverage.h"
#include <iostream>
using namespace std;

int main() {
    Beverage* beverageFirst = BeverageFactory::createBeverage(Beverage_Type_Coca);
    beverageFirst->setmName("Coca");
    beverageFirst->setQuantity("100");
    beverageFirst->setSize("1500ml");
    beverageFirst->initialize();
    cout << "Beverage type: " << beverageFirst->description() << endl;
    
    Beverage* beverageSecond = BeverageFactory::createBeverage(Beverage_Type_Pessi);
    beverageSecond->setmName("Pessi");
    beverageSecond->setQuantity("100");
    beverageSecond->setSize("1500ml");
    beverageSecond->initialize();
    cout << "Beverage type: " << beverageSecond->description() << endl;
    
    Beverage* beverageThird = BeverageFactory::createBeverage(Beverage_Type_Mirinda);
    beverageThird->setmName("Mirinda");
    beverageThird->setQuantity("100"); 
    beverageThird->setSize("480ml");
    beverageThird->initialize();
    cout << "Beverage type: " << beverageThird->description() << endl;
    
    delete beverageFirst;
    delete beverageSecond;
    delete beverageThird;

    return 0;
}

