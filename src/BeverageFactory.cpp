#include "Beverage.h"

Beverage* BeverageFactory::createBeverage(int beverageType) {
    Beverage* beverage = NULL;
    switch (beverageType) {
        case Beverage_Type_Coca:
            beverage = new Coca();
            break;
        case Beverage_Type_Pessi:
            beverage = new Pessi();
            break;
        case Beverage_Type_Mirinda:
            beverage = new Mirinda();
            break;
        default:
            beverage = new Coca(); // Default là Coca
            break;
    }
    return beverage;
}

