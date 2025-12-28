#include "Item.h"

// Base class
Item::Item(string n, double p) {
    name = n;
    price = p;
}

Item::~Item() {}

string Item::getName() {
    return name;
}

double Item::getPrice() {
    return price;
}

// Derived classes
Starter::Starter(string n, double p) : Item(n,p) {}
void Starter::display() {
    cout << "Starter    : " << setw(20) << left << name << " Rs " << price << endl;
}

MainCourse::MainCourse(string n, double p) : Item(n,p) {}
void MainCourse::display() {
    cout << "MainCourse : " << setw(20) << left << name << " Rs " << price << endl;
}

Dessert::Dessert(string n, double p) : Item(n,p) {}
void Dessert::display() {
    cout << "Dessert    : " << setw(20) << left << name << " Rs " << price << endl;
}

Beverage::Beverage(string n, double p) : Item(n,p) {}
void Beverage::display() {
    cout << "Drink      : " << setw(20) << left << name << " Rs " << price << endl;
}

