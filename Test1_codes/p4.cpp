#include <iostream>
using namespace std;

class GameController;

class Inventory {
private:
    int playerID;
    int numberOfItems;
    int* itemQuantity;

public:
    Inventory(int id, int n) {
        playerID = id;
        numberOfItems = n;

        itemQuantity = new int[numberOfItems];

        for (int i = 0; i < numberOfItems; i++) {
            itemQuantity[i] = 0;
        }
    }

    void enterInventory() {
        cout << "Enter quantity of " << numberOfItems << " items:\n";

        for (int i = 0; i < numberOfItems; i++) {
            cout << "Item " << i + 1 << ": ";
            cin >> itemQuantity[i];
        }
    }

    void display() {
        cout << "\nPlayer ID here is : " << playerID << endl;
        cout << "Item Quantities:\n";

        for (int i = 0; i < numberOfItems; i++) {
            cout << "Item " << i + 1 << ": " << itemQuantity[i] << endl;
        }
    }

    friend class GameController;

    ~Inventory() {
        delete[] itemQuantity;
    }
};

class GameController {
public:
    void inspectInventory(const Inventory& inv) {
        cout << "\n--- Inventory Inspection ---\n";

        cout << "Player ID here is: "
             << inv.playerID << endl;

        for (int i = 0; i < inv.numberOfItems; i++) {
            cout << "Item " << i + 1 << ": " << inv.itemQuantity[i] << endl;
        }
    }

    void modifyQuantity(Inventory& inv,
                        int position,
                        int newQuantity) {

        if (position < 1 ||
            position > inv.numberOfItems) {

            cout << "Invalid item position.\n";
            return;
        }

        inv.itemQuantity[position - 1] = newQuantity;

        cout << "Item quantity is modified successfully.\n";
    }
};

int main() {
    int playerID, numberOfItems;

    cout << "Enter Player ID: ";
    cin >> playerID;

    cout << "Enter number of items: ";
    cin >> numberOfItems;

    Inventory* inventory =
        new Inventory(playerID, numberOfItems);

    inventory->enterInventory();

    cout << "\nOriginal Inventory:";
    inventory->display();

    GameController controller;

    controller.inspectInventory(*inventory);

    int position, quantity;

    cout << "\nEnter item position to modify: ";
    cin >> position;

    cout << "Enter new quantity: ";
    cin >> quantity;

    controller.modifyQuantity(
        *inventory,
        position,
        quantity
    );

    cout << "\nUpdated Inventory:";
    inventory->display();

    delete inventory;

    return 0;
}