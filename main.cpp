#include "Order.h"
#include "Item.h"
#include <iostream>
using namespace std;

// Display menu
void displayMenu() {
    cout << "\n--------- MENU ---------\n";
    cout << "--- Starters ---\n";
    cout << "1. Fries 150\n2. Nuggets 250\n3. Chicken Roll 200\n4. Chicken Wings 300\n";
    cout << "\n--- Main Course ---\n";
    cout << "5. Zinger Burger 380\n6. Beef Burger 420\n7. Pasta Alfredo 550\n8. Pasta Bolognese 600\n";
    cout << "\n--- Pizza ---\n";
    cout << "9. Small Margherita 700\n10. Medium Pepperoni 1200\n11. Large Veggie 1700\n";
    cout << "\n--- Desserts ---\n";
    cout << "12. Ice Cream 180\n13. Brownie 220\n14. Chocolate Cake 300\n15. Pudding 250\n";
    cout << "\n--- Beverages ---\n";
    cout << "16. Coke 100\n17. Sprite 100\n18. Fanta 100\n19. Juice 150\n";
    cout << "\n--- Deals ---\n";
    cout << "20. Deal 1 (Burger+Drink) 450\n21. Deal 2 (Pizza+Drink) 1300\n";
    cout << "\n22. Remove Last Item\n23. Cancel Order\n0. Finish Order\n";
}

int main() {
    Order myOrder;
    int choice;

    cout << "===== FOOD ORDERING SYSTEM =====\n";

    myOrder.getCustomerInfo();

    do {
        displayMenu();
        cout << "\nEnter choice: ";
        cin >> choice;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter a number!\n";
            continue;
        }

        if(choice==1) myOrder.addItem(new Starter("Fries",150));
        else if(choice==2) myOrder.addItem(new Starter("Nuggets",250));
        else if(choice==3) myOrder.addItem(new Starter("Chicken Roll",200));
        else if(choice==4) myOrder.addItem(new Starter("Chicken Wings",300));
        else if(choice==5) myOrder.addItem(new MainCourse("Zinger Burger",380));
        else if(choice==6) myOrder.addItem(new MainCourse("Beef Burger",420));
        else if(choice==7) myOrder.addItem(new MainCourse("Pasta Alfredo",550));
        else if(choice==8) myOrder.addItem(new MainCourse("Pasta Bolognese",600));
        else if(choice==9) myOrder.addItem(new MainCourse("Small Margherita Pizza",700));
        else if(choice==10) myOrder.addItem(new MainCourse("Medium Pepperoni Pizza",1200));
        else if(choice==11) myOrder.addItem(new MainCourse("Large Veggie Pizza",1700));
        else if(choice==12) myOrder.addItem(new Dessert("Ice Cream",180));
        else if(choice==13) myOrder.addItem(new Dessert("Brownie",220));
        else if(choice==14) myOrder.addItem(new Dessert("Chocolate Cake",300));
        else if(choice==15) myOrder.addItem(new Dessert("Pudding",250));
        else if(choice==16) myOrder.addItem(new Beverage("Coke",100));
        else if(choice==17) myOrder.addItem(new Beverage("Sprite",100));
        else if(choice==18) myOrder.addItem(new Beverage("Fanta",100));
        else if(choice==19) myOrder.addItem(new Beverage("Juice",150));
        else if(choice==20) myOrder.addItem(new MainCourse("Deal 1 (Burger+Drink)",450));
        else if(choice==21) myOrder.addItem(new MainCourse("Deal 2 (Pizza+Drink)",1300));
        else if(choice==22) myOrder.removeLastItem();
        else if(choice==23) myOrder.cancelOrder();
        else if(choice==0) cout << "Finishing order...\n";
        else cout << "Invalid choice!\n";

    } while(choice != 0);

    myOrder.showOrder();
    myOrder.saveOrder();
    cout << "Order saved. Thank you!\n";

    return 0;
}

