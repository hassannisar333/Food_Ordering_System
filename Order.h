#ifndef ORDER_H
#define ORDER_H

#include "Item.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Order {
private:
    string customerName;
    string address;
    vector<Item*> orderItems;
public:
    ~Order();
    void getCustomerInfo();
    void addItem(Item* item);
    void removeLastItem();
    void cancelOrder();
    double calculateTotal();
    void showOrder();
    void saveOrder();
};

#endif

