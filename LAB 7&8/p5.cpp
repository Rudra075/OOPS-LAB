
#include <iostream>
using namespace std;

class Sensor {
protected:
    int sensorID;

public:
    Sensor(int id) {
        sensorID = id;
    }
};

class Temperature : virtual public Sensor {
protected:
    double temperature;

public:
    Temperature(int id, double t)
        : Sensor(id) {
        temperature = t;
    }
};

class Humidity : virtual public Sensor {
protected:
    double humidity;

public:
    Humidity(int id, double h)
        : Sensor(id) {
        humidity = h;
    }
};

class FarmMonitor : public Temperature,
                    public Humidity {
public:
    FarmMonitor(int id, double t, double h)
        : Sensor(id),
          Temperature(id, t),
          Humidity(id, h) {}

    void display() {
        cout << "\n--- Farm Monitoring System ---" << endl;

        cout << "Sensor ID: " << sensorID << endl;
        cout << "Temperature: " << temperature
             << " Celsius" << endl;

        cout << "Humidity: " << humidity
             << "%" << endl;

        if (temperature > 35 || humidity > 80) {
            cout << "WARNING: Unsafe farm conditions!"
                 << endl;
        } else {
            cout << "Farm conditions are normal."
                 << endl;
        }
    }
};

int main() {
    int id;
    double temp, humidity;

    cout << "Enter Sensor ID: ";
    cin >> id;

    cout << "Enter Temperature: ";
    cin >> temp;

    cout << "Enter Humidity: ";
    cin >> humidity;

    FarmMonitor farm(id, temp, humidity);

    farm.display();

    return 0;
}