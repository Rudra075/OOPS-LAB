#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    float price;

public:
    Book(string t, float p) {
        title = t;
        price = p;
    }

    bool operator<(Book b) {
        if (price == b.price)
            return title < b.title;

        return price < b.price;
    }

    void display() {
        cout << title << " - Rs. " << price << endl;
    }
};

int main() {
    Book b1("Harry Potter", 500);
    Book b2("The Hobbit", 400);

    b1.display();
    b2.display();

    if (b1 < b2)
        cout << "First book is smaller";
    else
        cout << "Second book is smaller";

    return 0;
}