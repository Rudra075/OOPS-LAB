#include <iostream>
using namespace std;

class SensorGrid {
private:
    int n;
    double* temperature;

public:
    SensorGrid(int size) {
        n = size;
        temperature = new double[n];
    }

    void enterReadings() {
        cout << "Enter " << n << " temperature readings:\n";

        for (int i = 0; i < n; i++) {
            cout << "Reading " << i + 1 << ": ";
            cin >> temperature[i];
        }
    }

    void displayReadings() {
        cout << "\nTemperature Readings:\n";

        for (int i = 0; i < n; i++) {
            cout << "Position " << i + 1 << ": " << temperature[i] << " C\n";
        }
    }

    void replaceReading(int position, double newTemperature) {
        if (position < 1 || position > n) {
            cout << "Invalid position.\n";
            return;
        }

        temperature[position - 1] = newTemperature;

        cout << "Reading replaced.\n";
    }

    double average() const {
        double sum = 0;

        for (int i = 0; i < n; i++) {
            sum += temperature[i];
        }

        return sum / n;
    }

    friend void compareAverage(const SensorGrid& s1, const SensorGrid& s2);

    ~SensorGrid() {
        delete[] temperature;
    }
};

void compareAverage(const SensorGrid& s1, const SensorGrid& s2) {

    double avg1 = s1.average();
    double avg2 = s2.average();

    cout << "\n--- Average Temperature Comparison ---\n";

    cout << "Grid 1 Average: " << avg1 << " C\n";
    cout << "Grid 2 Average: " << avg2 << " C\n";

    if (avg1 > avg2) {
        cout << "Grid 1 has high average temperature.\n";
    }
    else if (avg2 > avg1) {
        cout << "Grid 2 has high average temperature.\n";
    }
    else {
        cout << "Both of the grids have the same average temperature.\n";
    }
}

int main() {
    int n1, n2;

    cout << "Enter the number of sensors present in Grid 1: ";
    cin >> n1;

    SensorGrid* grid1 = new SensorGrid(n1);

    grid1->enterReadings();

    cout << "\nEnter the number of sensors present in Grid 2: ";
    cin >> n2;

    SensorGrid* grid2 = new SensorGrid(n2);

    grid2->enterReadings();

    cout << "\n--- Grid 1 ---";
    grid1->displayReadings();

    cout << "\n--- Grid 2 ---";
    grid2->displayReadings();

    int position;
    double newTemperature;

    cout << "\nEnter the position to replace in Grid 1: ";
    cin >> position;

    cout << "Enter the new temperature here: ";
    cin >> newTemperature;

    grid1->replaceReading(position, newTemperature);

    cout << "\nGrid 1 after replacing:";
    grid1->displayReadings();

    compareAverage(*grid1, *grid2);

    delete grid1;
    delete grid2;

    return 0;
}