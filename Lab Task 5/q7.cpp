#include <iostream>
using namespace std;

class MenuItems {
    string foodName;
    float foodPrice;

public:
    MenuItems() : foodName(""), foodPrice(0) {}
    MenuItems(string name, float price) : foodName(name), foodPrice(price) {}

    void setName(string n) {
        this->foodName = n;
    }

    void setPrice(float p) {
        this->foodPrice = p;
    }

    string getName() {
        return foodName;
    }

    float getPrice() {
        return foodPrice;
    }
};

class Menu {
    MenuItems Items[5];
    int itemCount = 0;

public:
    void addItem(MenuItems item) {
        if (itemCount < 5) { 
            Items[itemCount++] = item;
            cout << "Item Added" << endl;
        } else {
            cout << "Item limit reached" << endl;
        }
    }

    void removeItem(int index) {
        if (index >= 0 && index < itemCount) {
            for (int i = index; i < itemCount - 1; i++) {
                Items[i] = Items[i + 1];
            }
            itemCount--;
            cout << "Item Removed" << endl;
        } else {
            cout << "Invalid Index or Insufficient Items" << endl;
        }
    }

    void displayMenu() {
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ".  Item Name: " << Items[i].getName() << "  Food Price: " << Items[i].getPrice() << endl;
        }
    }

    MenuItems getItem(int i) {
        return Items[i];
    }

    int getItemCount() {
        return itemCount;
    }
};

class Payment {
    float Bill;

public:
    Payment() : Bill(0) {}

    void setBill(float amount) {
        Bill = amount;
    }

    float getBill() {
        return Bill;
    }
};

class Order {
    MenuItems item[5];
    int itemCount;
    Payment p;

public:
    Order() : itemCount(0) {}

    Order(MenuItems arr[5], int Count) {
        float amount = 0;
        itemCount = Count;
        for (int i = 0; i < Count; i++) {
            item[i] = arr[i];
            amount += item[i].getPrice();
        }
        p.setBill(amount);
    }

    void displayOrderDetails() {
        cout << "Order Items" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << item[i].getName() << "     " << item[i].getPrice() << endl;
        }
        cout << "Total Bill: " << p.getBill() << endl;
    }
};

class RestaurantOrderingSystem {
    Menu menu;
    Order orders[10];
    int orderCount;

public:
    RestaurantOrderingSystem(Menu m) : menu(m), orderCount(0) {}

    void makeOrder() {
        menu.displayMenu();
        MenuItems list[5];
        int count, itemNum;

        cout << "How many items do you want to order: ";
        cin >> count;

        for (int i = 0; i < count; i++) {
            cout << "Enter The Number Of The Item You Want To Order: ";
            cin >> itemNum;
            if (itemNum > 0 && itemNum <= menu.getItemCount()) {
                list[i] = menu.getItem(itemNum - 1);
            } else {
                cout << "Invalid Item Number!" << endl;
                i--; 
            }
        }
        orders[orderCount++] = Order(list, count); 
        cout << "Order Placed" << endl;
        orders[orderCount - 1].displayOrderDetails();
    }
};

int main() {
    Menu menu;
    MenuItems m1("Handi", 3500);
    MenuItems m2("Karahi", 4000);
    MenuItems m3("Nihari", 1300);
    MenuItems m4("Biryani", 300);
    MenuItems m5("Mandi", 2500);

    menu.addItem(m1);
    menu.addItem(m2);
    menu.addItem(m3);
    menu.addItem(m4);
    menu.addItem(m5);

    RestaurantOrderingSystem r1(menu);
    r1.makeOrder();

    return 0;
}
