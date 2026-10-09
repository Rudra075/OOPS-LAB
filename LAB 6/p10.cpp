#include <iostream>
using namespace std;

class Bill {
    int items;
    float amount;

public:
    Bill(int i, float a) {
        items = i;
        amount = a;
    }

    Bill operator+(Bill b) {
        return Bill(items + b.items,
                    amount + b.amount);
    }

    bool operator>(Bill b) {
        return amount > b.amount;
    }

    void display() {
        cout << "Number of items: " << items
             << "\nTotal amount: Rs. " << amount
             << endl;
    }
};

int main() {
    Bill b1(3, 500);
    Bill b2(2, 300);

    Bill b3 = b1 + b2;

    cout << "First bill:\n";
    b1.display();

    cout << "\nSecond bill:\n";
    b2.display();

    cout << "\nCombined bill:\n";
    b3.display();

    cout << "\nIs first bill greater than second bill? "
         << (b1 > b2) << endl;

    return 0;
}