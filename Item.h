#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Base class
class Item {
protected:
    string name;
    double price;
public:
    Item(string n, double p);
    virtual ~Item();
    string getName();
    double getPrice();
    virtual void display() = 0; // pure virtual for polymorphism
};

// Derived classes
class Starter : public Item {
public:
    Starter(string n, double p);
    void display();
};

class MainCourse : public Item {
public:
    MainCourse(string n, double p);
    void display();
};

class Dessert : public Item {
public:
    Dessert(string n, double p);
    void display();
};

class Beverage : public Item {
public:
    Beverage(string n, double p);
    void display();
};

#endif

