#include <iostream>
using namespace std;

class Score {
    int value;

public:
    Score(int v = 0) {
        value = v;
    }

    Score operator++() {
        ++value;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Score s(10);

    Score a = ++s;

    cout << "Prefix result: ";
    a.display();

    Score b = s++;

    cout << "Postfix result: ";
    b.display();

    cout << "Current score: ";
    s.display();

    return 0;
}