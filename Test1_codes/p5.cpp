#include <iostream>
using namespace std;

class Trip {
private:
    int tripID;
    double distance;
    double baseFare;
    double finalFare;

public:

    Trip(int id, double dist, double fare) {
        tripID = id;
        distance = dist;
        baseFare = fare;
        finalFare = 0;
    }

    void fare() {

        finalFare = baseFare + (distance * 10);
    }

    void fare(int waitingTime) {

        finalFare = baseFare +(distance * 10) + (waitingTime * 2);
    }
    void fare(int waitingTime, int discount) {

        double total;

        total = baseFare +
                (distance * 10) +
                (waitingTime * 2);

        
        finalFare = total - (total * discount / 100.0);
    }

    void display() {

        cout << "Trip ID: " << tripID << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Base Fare: Rs. " << baseFare << endl;
        cout << "Final Fare: Rs. " << finalFare << endl;
    }

    // Friend function
    friend void compareFare(const Trip& t1,
                            const Trip& t2);
};

// Friend function
void compareFare(const Trip& t1,
                 const Trip& t2) {

    cout << "\n--- Fare Comparison ---\n";

    if (t1.finalFare < t2.finalFare) {

        cout << "Trip " << t1.tripID
             << " is cheaper.\n";

    }
    else if (t2.finalFare < t1.finalFare) {

        cout << "Trip " << t2.tripID
             << " is cheaper.\n";

    }
    else {

        cout << "Both trips have the same fare.\n";
    }
}

int main() {

    Trip* trip1 =
        new Trip(101, 10, 50);

    Trip* trip2 =
        new Trip(102, 12, 60);

    
    trip1->fare(10);
    trip2->fare(15, 10);

    cout << "--- Trip 1 ---\n";
    trip1->display();

    cout << "\n--- Trip 2 ---\n";
    trip2->display();

    compareFare(*trip1, *trip2);

    delete trip1;
    delete trip2;

    return 0;
}