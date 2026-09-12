#include <iostream>
using namespace std;

class Borrower {
private:
    int borrowerID;
    int overdueDays;
    double fineAmount;

public:
    Borrower(int id, int days) {
        borrowerID = id;
        overdueDays = days;
        fineAmount = 0;
    }

    void calculateFine() {
        fineAmount = overdueDays * 5;
    }

    void calculateFine(double specialRate) {
        fineAmount = overdueDays * specialRate;
    }

    void display() {
        cout << "Borrower ID: " << borrowerID << endl;
        cout << "Overdue Days: " << overdueDays << endl;
        cout << "Fine Amount: Rs. " << fineAmount << endl;
    }

    friend void compareFine(const Borrower& b1, const Borrower& b2);
};

void compareFine(const Borrower& b1, const Borrower& b2) {
    cout << "\n--- Fine Comparison ---\n";

    if (b1.fineAmount > b2.fineAmount) {
        cout << "Borrower " << b1.borrowerID << " has higher fine.\n";
    }
    else if (b2.fineAmount > b1.fineAmount) {
        cout << "Borrower " << b2.borrowerID << " has higher fine.\n";
    }
    else {
        cout << "Both of the borrowers have the same fines.\n";
    }
}

int main() {
    Borrower* b1 = new Borrower(100, 10);
    Borrower* b2 = new Borrower(101, 15);

    b1->calculateFine();
    b2->calculateFine(7.0);

    cout << "--- Borrower 1 ---\n";
    b1->display();

    cout << "\n--- Borrower 2 ---\n";
    b2->display();

    compareFine(*b1, *b2);

    delete b1;
    delete b2;

    return 0;
}