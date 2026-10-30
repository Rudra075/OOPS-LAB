#include <iostream>
#include <algorithm>
using namespace std;

class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount) {
        return 0;
    }
};

class UrbanSignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 10 + 2 * vehicleCount;

        return min(duration, 60);
    }
};

class HighwaySignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 15 + 3 * vehicleCount;

        return min(duration, 90);
    }
};

int main() {
    int vehicles;

    cout << "Enter vehicle count: ";
    cin >> vehicles;

    UrbanSignal urban;
    HighwaySignal highway;

    TrafficSignal *ptr;

    ptr = &urban;

    cout << "\nUrban Green Duration: "
         << ptr->getGreenDuration(vehicles)
         << " seconds" << endl;

    ptr = &highway;

    cout << "Highway Green Duration: "
         << ptr->getGreenDuration(vehicles)
         << " seconds" << endl;

    return 0;
}