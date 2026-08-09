#include <iostream>
using namespace std;

class HotelRoom
{
private:
    int roomNumber;
    string guestName;
    int days;
    float costPerDay, totalRent;

public:
    void input()
    {
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        cout << "Enter Guest Name: ";
        cin >> guestName;

        cout << "Enter Number of Days: ";
        cin >> days;

        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculate()
    {
        totalRent = days * costPerDay;
    }

    void display()
    {
        cout << "\nBooking Details\n";
        cout << "Room Number : " << roomNumber << endl;
        cout << "Guest Name : " << guestName << endl;
        cout << "Total Rent : " << totalRent << endl;
    }
};

int main()
{
    HotelRoom h;

    h.input();
    h.calculate();
    h.display();

    return 0;
}