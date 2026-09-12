#include <iostream>
using namespace std;

class ParkingFloor {
private:
    int floorNumber;
    int numberOfSlots;
    bool* slots;

public:
    ParkingFloor(int floor, int n) {
        floorNumber = floor;
        numberOfSlots = n;
        slots = new bool[numberOfSlots];

        for (int i = 0; i < numberOfSlots; i++) {
            slots[i] = false;
        }
    }

    void reserve(int position) {
        if (position < 1 || position > numberOfSlots) {
            cout << "Invalid slot number.\n";
            return;
        }

        if (slots[position - 1]) {
            cout << "Slot " << position << " is already reserved.\n";
        } else {
            slots[position - 1] = true;
            cout << "Slot " << position << " is reserved.\n";
        }
    }

    void reserve(int startPosition, int count) {
        if (startPosition < 1 ||
            startPosition + count - 1 > numberOfSlots) {
            cout << "These are invalid range of slots.\n";
            return;
        }

        for (int i = startPosition - 1;
             i < startPosition - 1 + count; i++) {
            if (slots[i]) {
                cout << "These slots in the this range are already reserved.\n";
                return;
            }
        }

        for (int i = startPosition - 1;
             i < startPosition - 1 + count; i++) {
            slots[i] = true;
        }

        cout << count << " consecutive slots are reserved here.\n";
    }

    void display() {
        cout << "\nFloor Number: " << floorNumber << endl;
        cout << "Slots:\n";

        for (int i = 0; i < numberOfSlots; i++) {
            cout << "Slot " << i + 1 << ": ";

            if (slots[i])
                cout << "Reserved";
            else
                cout << "Available";

            cout << endl;
        }
    }

    ~ParkingFloor() {
        delete[] slots;
    }
};

int main() {
    int floors;

    cout << "Enter number of floors: ";
    cin >> floors;

    ParkingFloor** building = new ParkingFloor*[floors];

    for (int i = 0; i < floors; i++) {
        int slots;

        cout << "\nEnter number of slots for Floor "
             << i + 1 << ": ";
        cin >> slots;

        building[i] = new ParkingFloor(i + 1, slots);
    }

    cout << "\n--- Reserving on Floor 1 ---\n";

    building[0]->reserve(2);
    building[0]->reserve(4, 3);
    building[0]->display();

    for (int i = 0; i < floors; i++) {
        delete building[i];
    }

    delete[] building;

    return 0;
}