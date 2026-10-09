#include <iostream>
using namespace std;

class AccountBalance {
    float balance;

public:
    AccountBalance(float b) {
        balance = b;
    }

    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    void display() {
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    AccountBalance a1(5000);

    AccountBalance a2 = -a1;

    cout << "Original account: ";
    a1.display();

    cout << "New account: ";
    a2.display();

    return 0;
}