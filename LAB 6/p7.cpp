#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    float price;

public:
    InventoryItem(int i, float p, int q) {
        id = i;
        price = p;
        quantity = q;
    }

    InventoryItem operator+(InventoryItem item) {
        if (id == item.id && price == item.price) {
            return InventoryItem(id, price,
                                 quantity + item.quantity);
        }

        cout << "Items are incompatible!" << endl;
        return *this;
    }

    void display() {
        cout << "Product ID: " << id
             << ", Price: Rs. " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 20);
    InventoryItem i3(102, 60, 5);

    InventoryItem i4 = i1 + i2;

    cout << "Combined inventory:" << endl;
    i4.display();

    cout << "\nTrying incompatible items:" << endl;
    InventoryItem i5 = i1 + i3;

    return 0;
}