#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKM;

public:
    VehicleService()
    {
        vehicleNumber = "OD01AB1234";
        ownerName = "Rudra";
        serviceDue = true;
        lastServiceKM = 5000;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void display(VehicleService &v)
    {
        cout << "\n--- Vehicle Service Details ---\n";
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service KM: " << v.lastServiceKM << endl;

        cout << "Service Status: ";

        if (v.serviceDue)
            cout << "Due";
        else
            cout << "Completed";
    }

    void completeService(VehicleService &v)
    {
        v.serviceDue = false;
        cout << "\nService marked as completed";
    }

    void updateKM(VehicleService &v, int km)
    {
        v.lastServiceKM = km;
        cout << "\nLast service KM updated";
    }

    void checkService(VehicleService &v)
    {
        if (v.serviceDue)
            cout << "\nService Required";
        else
            cout << "\nNo Service Required";
    }
};

int main()
{
    VehicleService v;
    ServiceManager m;

    m.display(v);
    m.checkService(v);
    m.completeService(v);
    m.updateKM(v, 8000);
    m.display(v);

    return 0;
}