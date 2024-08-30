#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
using namespace std;

enum BeverageType {
    Beverage_Type_Coca = 0,
    Beverage_Type_Pessi,
    Beverage_Type_Mirinda,
    Beverage_Type_Default
};

class Beverage {
public:
    virtual string description() = 0;
    virtual void setmName(string mname) = 0;
    virtual void setQuantity(string quantity) = 0; 
    virtual void setSize(string size) = 0;
    virtual bool initialize() = 0;
    virtual ~Beverage() {}
};

class Coca : public Beverage {
private:
    string mname;
    string quantity;
    string size;
public:
    string description() override;
    void setmName(string mname) override;
    void setQuantity(string quantity) override;
    void setSize(string size) override;
    bool initialize() override;
};

class Pessi : public Beverage {
private:
    string mname;
    string quantity;
    string size;
public:
    string description() override;
    void setmName(string mname) override;
    void setQuantity(string quantity) override;
    void setSize(string size) override;
    bool initialize() override;
};

class Mirinda : public Beverage {
private:
    string mname;
    string quantity; 
    string size;
public:
    string description() override;
    void setmName(string mname) override;
    void setQuantity(string quantity) override;
    void setSize(string size) override;
    bool initialize() override;
};

class BeverageFactory {
public:
    static Beverage* createBeverage(int beverageType);
};

#endif


