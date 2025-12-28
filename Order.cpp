#include "Order.h"

// Destructor
Order::~Order() {
    for(int i=0; i<orderItems.size(); i++)
        delete orderItems[i];
}

// Get customer info
void Order::getCustomerInfo() {
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    cout << "Enter Address: ";
    getline(cin, address);
}

// Add item
void Order::addItem(Item* item) {
    orderItems.push_back(item);
    cout << "Item added!\n";
}

// Remove last item
void Order::removeLastItem() {
    if(orderItems.empty())
        cout << "No item to remove!\n";
    else {
        delete orderItems.back();
        orderItems.pop_back();
        cout << "Last item removed!\n";
    }
}

// Cancel order
void Order::cancelOrder() {
    for(int i=0; i<orderItems.size(); i++)
        delete orderItems[i];
    orderItems.clear();
    cout << "Order cancelled!\n";
}

// Calculate total
double Order::calculateTotal() {
    double total = 0;
    for(int i=0; i<orderItems.size(); i++)
        total += orderItems[i]->getPrice();
    return total;
}

// Show order
void Order::showOrder() {
    cout << "\n========== RECEIPT ==========\n";
    cout << "Customer: " << customerName << "\nAddress: " << address << "\n-----------------------------\n";
    for(int i=0; i<orderItems.size(); i++)
        orderItems[i]->display();
    cout << "-----------------------------\nTotal: Rs " << calculateTotal() << endl;
}

// Save order
void Order::saveOrder() {
    ofstream f("OrderHistory.txt", ios::app);
    f << "Customer: " << customerName << "\nAddress: " << address << endl;
    for(int i=0; i<orderItems.size(); i++)
        f << orderItems[i]->getName() << " Rs " << orderItems[i]->getPrice() << endl;
    f << "Total: Rs " << calculateTotal() << "\n=======================\n";
    f.close();
}

