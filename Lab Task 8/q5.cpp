#include<iostream>
using namespace std;
class Product {
protected:
    int productId;
    double price;

public:
    Product(int id, double p) : productId(id), price(p) {}

    virtual double calculatePrice() {
        return price; 
    }

    virtual void applyDiscount(double discount) {
        price -= discount;
    }

    int getProductId() const { return productId; }
    double getPrice() const { return price; }
};
class Electronics : public Product {
public:
    Electronics(int id, double p) : Product(id, p) {}

    double calculatePrice() override {
        return price + (price * 0.15);
    }

    void applyDiscount(double percentage) override {
        price -= (price * percentage / 100); 
    }

    void applyBOGO() {
        price = price / 2;
    }
};
class Clothing : public Product {
public:
    Clothing(int id, double p) : Product(id, p) {}

    double calculatePrice() override {
        return price + (price * 0.05);
    }

    void applyDiscount(double percentage) override {
        price -= (price * percentage / 100); 
    }

    void applyBOGO() {
        price = price / 2; 
}
};
class ShoppingCart {
private:
    Product** cart_items;
    int item_count;
    int max_capacity;

public:
    ShoppingCart(int max_items = 10) : item_count(0), max_capacity(max_items) {
        cart_items = new Product*[max_capacity];
    }

    ~ShoppingCart() {
        delete[] cart_items;
    }

    void add_item(Product* item) {
        if (item_count < max_capacity) {
            cart_items[item_count++] = item;
        }
    }

    void apply_percentage_discount(double percentage) {
        for (int i = 0; i < item_count; i++) {
            cart_items[i]->applyDiscount(percentage);
        }
    }

    void apply_fixed_discount(double amount) {
        for (int i = 0; i < item_count; i++) {
            cart_items[i]->applyDiscount(amount);
        }
    }

    void buy_one_get_one_offer() {
        if (item_count < max_capacity && item_count > 0) {
            cart_items[item_count] = cart_items[item_count - 1];
            item_count++;
        }
    }

    ShoppingCart merge_with(const ShoppingCart &other) {
        ShoppingCart merged_cart(max_capacity + other.max_capacity);
        for (int i = 0; i < item_count; i++) {
            merged_cart.add_item(cart_items[i]);
        }
        for (int i = 0; i < other.item_count; i++) {
            merged_cart.add_item(other.cart_items[i]);
        }
        return merged_cart;
    }

    ShoppingCart remove_item(Product* item) {
        ShoppingCart updated_cart(max_capacity);
        for (int i = 0; i < item_count; i++) {
            if (cart_items[i]->getProductId() != item->getProductId()) {
                updated_cart.add_item(cart_items[i]);
            }
        }
        return updated_cart;
    }

    ShoppingCart apply_bulk_discount(double discount) {
        ShoppingCart discounted_cart = *this;
        discounted_cart.apply_percentage_discount(discount);
        return discounted_cart;
    }

    ShoppingCart split_bill(int users) {
        ShoppingCart split_cart = *this;
        for (int i = 0; i < split_cart.item_count; i++) {
            split_cart.cart_items[i]->applyDiscount(split_cart.cart_items[i]->getPrice() / users);
        }
        return split_cart;
    }

    void display_cart() {
        double total = 0;
        cout << "Cart:\n";
        for (int i = 0; i < item_count; i++) {
            cout << "Product ID: " << cart_items[i]->getProductId()
            << " | Price: $" << cart_items[i]->calculatePrice() << endl;
            total += cart_items[i]->calculatePrice();
        }
        cout << "Total Amount: $" << total << "\n";
    }
};
int main() {
    Electronics e1(101, 500);
    Clothing c1(102, 100);
    e1.applyDiscount(10);
    c1.applyDiscount(5);  
    ShoppingCart cart;
    cart.add_item(&e1);
    cart.add_item(&c1);

    cart.display_cart();
    cart.apply_percentage_discount(15);
    cart.display_cart();
    ShoppingCart split_cart = cart.split_bill(2);
    split_cart.display_cart();

    return 0;
}